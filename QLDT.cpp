#include "QLDT.h"

void QLDT::Input()
{
	ifstream inputdt("dienthoai.txt");
	if (inputdt.is_open()) {
		string line;
		while (getline(inputdt, line)) {
			stringstream ss(line);
			string madt, ten, manhinh, chip;
			int cameratruoc, camerasau, pin, hang, mau, ram, dungluong, soluong, giamgia;
			long long gia;
			getline(ss, madt, ',');
			getline(ss, ten, ',');
			getline(ss, manhinh, ',');
			getline(ss, chip, ',');
			ss >> cameratruoc;
			ss.ignore();
			ss >> camerasau;
			ss.ignore();
			ss >> pin;
			ss.ignore();
			ss >> hang;
			ss.ignore();
			ss >> ram;
			ss.ignore();
			ss >> dungluong;
			ss.ignore();
			ss >> mau;
			ss.ignore();
			ss >> soluong;
			ss.ignore();
			ss >> gia;
			ss.ignore();
			ss >> giamgia;
			Dienthoai dt(madt, ten, manhinh, chip, cameratruoc, camerasau, pin, hang, mau, ram, dungluong, soluong, gia, giamgia);
			danhsachDT.push_back(dt);
		}

	}
	inputdt.close();
	ifstream inputnv("nhanvien.txt");
	if (inputnv.is_open()) {
		string line;
		while (getline(inputnv, line)) {
			stringstream ss(line);
			string ten, sdt, diachi, gioitinh, ngaysinh;
			string manv, email;
			long long luong;
			getline(ss, manv, ',');
			getline(ss, ten, ',');
			getline(ss, sdt, ',');
			getline(ss, diachi, ',');
			getline(ss, gioitinh, ',');
			getline(ss, ngaysinh, ',');
			getline(ss, email, ',');
			ss >> luong;
			nhanvien nv(manv, ten, sdt, diachi, gioitinh, ngaysinh, email, luong);
			danhsachNV.push_back(nv);
		}

	}
	inputnv.close();
	ifstream inputkh("khachhang.txt");
	if (inputkh.is_open()) {
		string line;
		while (getline(inputkh, line)) {
			stringstream ss(line);
			string ten, sdt, diachi, gioitinh, ngaysinh;
			string makh;
			getline(ss, makh, ',');
			getline(ss, ten, ',');
			getline(ss, sdt, ',');
			getline(ss, diachi, ',');
			getline(ss, gioitinh, ',');
			getline(ss, ngaysinh, ',');
			khachhang kh(makh, ten, sdt, diachi, gioitinh, ngaysinh);
			danhsachKH.push_back(kh);
		}
	}
	inputkh.close();
	ifstream inputhd("hoadon.txt");
	if (inputhd.is_open()) {
		string line;
		while (getline(inputhd, line)) {
			stringstream ss(line);
			string mahoadon;
			string ngayban;
			string tenkh, mkh, tennv, mnv;
			vector<Dienthoai> dssp;
			khachhang KH;
			nhanvien NV;
			getline(ss, mahoadon, ',');
			getline(ss, ngayban, ',');
			getline(ss, mkh, ',');
			KH.setMakh(mkh);
			getline(ss, tenkh, ',');
			KH.setTen(tenkh);
			getline(ss, mnv, ',');
			NV.setManv(mnv);
			getline(ss, tennv, ',');
			NV.setTen(tennv);
			getline(inputhd, line);
			long long tongtien;
			do {
				Dienthoai dt;
				string madt, tendt;
				int soluong, giamgia;
				long long gia;
				stringstream ss2(line);
				getline(ss2, madt, ',');
				dt.setMadt(madt);
				getline(ss2, tendt, ',');
				dt.setTen(tendt);
				ss2 >> soluong;
				ss2.ignore();
				dt.setSoluong(soluong);
				ss2 >> gia;
				ss2.ignore();
				dt.setGia(gia);
				ss2 >> giamgia;
				dt.setGG(giamgia);
				dssp.push_back(dt);
				getline(inputhd, line);
			} while (line.size() > 15);
			tongtien = stoll(line);
			Hoadon hd(mahoadon, ngayban, KH, NV, dssp, tongtien);
			danhsachHD.push_back(hd);
		}
	}
	inputhd.close();
}

void QLDT::Hienthi(string chon)
{
	int i = 0;
	if (chon == "DT") {
		for (const auto& Dienthoai : danhsachDT) {
			cout << ++i << "." << endl;
			Dienthoai.show();
		}
		cout <<"Size===" << danhsachDT.size() << endl;
	}
	else if (chon == "NV") {
		for (const auto& nhanvien : danhsachNV) {
			cout << ++i << "." << endl;
			nhanvien.show();
		}
	}
	else if (chon == "KH") {
		for (const auto& khachhang : danhsachKH) {
			cout << ++i << "." << endl;
			khachhang.show();
		}
	}
	else if (chon == "HD") {
		for (auto& Hoadon : danhsachHD) {
			cout << endl;
			cout << "**********************************************************************" << endl;
			cout << "STT" << ++i << "." << endl;
			Hoadon.show();
		}
	}
}

int QLDT::ViTri(string chon, string ten, string ma)
{
	ten = " " + ten;
	if (chon == "DT")
		for (int i = 0; i < danhsachDT.size(); i++) {
			if (danhsachDT[i].getTen() == ten && danhsachDT[i].getMadt() == ma) {
				return i;
			}
		}
	else if (chon == "NV") {
		for (int i = 0; i < danhsachNV.size(); i++) {
			if (danhsachNV[i].getTen() == ten && danhsachNV[i].getManv() == ma) {
				return i;
			}
		}
	}
	else if (chon == "KH") {
		for (int i = 0; i < danhsachKH.size(); i++) {
			if (danhsachKH[i].getTen() == ten && danhsachKH[i].getMakh() == ma) {
				return i;
			}
		}
	}
	else if (chon == "HD") {
		for (int i = 0; i < danhsachHD.size(); i++) {
			if (danhsachHD[i].getKh().getMakh() == ten && danhsachHD[i].getMahoadon() == ma) {
				return i;
			}
		}
	}
	return -1;
}

void QLDT::Them(string chon)
{
	if (chon == "DT") {
		Dienthoai dt;
		dt.nhap();
		danhsachDT.push_back(dt);
	}
	else if (chon == "NV") {
		nhanvien nv;
		nv.nhap();
		danhsachNV.push_back(nv);
	}
	else if (chon == "KH") {
		khachhang kh;
		kh.nhap();
		danhsachKH.push_back(kh);
	}
	else if (chon == "HD") {
		string mhd, nb, tkh, mkh, tnv, mnv;
		long long tongtien=0;
		khachhang kh;
		nhanvien nv;
		vector<Dienthoai> dsp;
		cout << "Ma hoa don: "; cin >> mhd;
		cout << "Ngay ban: "; cin >> nb;
		cout << "Ma khach hang: "; cin >> mkh;
		cin.ignore();
		cout << "Ten khach hang: "; getline(cin,tkh);
		kh.setMakh(mkh);
		kh.setTen(tkh);
		cout << "Ma nhan vien: "; cin >> mnv;
		cin.ignore();
		cout << "Ten nhan vien: "; getline(cin,tnv);
		nv.setManv(mnv);
		nv.setTen(tnv);
		do {
			Dienthoai dt;
			string msp, tsp;
			int sl,gg;
			long long gia;
			cout << "Ma san pham: "; cin >> msp;
			cin.ignore();
			cout << "Ten san pham: "; getline(cin,tsp);
			if (ViTri("DT", tsp, msp) == -1) return;
			cout << "So luong: "; cin >> sl;
			cout << "Gia: "; cin >> gia;
			cout << "Giam gia: "; cin >> gg;
			dt.setDon(msp, tsp, sl, gia, gg);
			dsp.push_back(dt);
			tongtien += gia * sl * (100-gg) / 100;			
			danhsachDT[ViTri("DT", tsp, msp)].setSl(sl);
			cout << "Nhan 't' de tiep tuc them san pham!" << endl;
			char kitu = _getch();
			if(kitu!='t')
				break;
		} while (1);
		cout << "Tong tien: " << tongtien << endl;
		Hoadon hd(mhd, nb, kh, nv, dsp, tongtien);
		danhsachHD.push_back(hd);
		hd.show();
	}
	Output(chon);
}
void QLDT::Xoa(string chon, string ten, string ma)
{
	int index = ViTri(chon, ten, ma);
	if (chon == "DT") {
		danhsachDT.erase(danhsachDT.begin() + index - 1);
	}
	else if (chon == "NV") {
		danhsachNV.erase(danhsachNV.begin() + index - 1);
	}
	else if (chon == "KH") {
		danhsachKH.erase(danhsachKH.begin() + index - 1);
	}
	Output(chon);
}

void QLDT::CapNhat(string chon, string ten, string ma)
{
	int index = ViTri(chon, ten, ma);
	if (chon == "DT") {

		Dienthoai dt;
		dt.nhap();
		danhsachDT[index] = dt;
	}
	else if (chon == "NV") {
		nhanvien nv;
		nv.nhap();
		danhsachNV[index] = nv;
	}
	else if (chon == "KH") {
		khachhang kh;
		kh.nhap();
		danhsachKH[index] = kh;
	}
	Output(chon);
}

void QLDT::TimKiem(string chon, string ten, string ma)
{
	if (chon == "DT") {
		if (ViTri(chon, ten, ma) != -1) {
			danhsachDT[ViTri(chon, ten, ma)].show();
		}
		else cout << "Not found!" << endl;
	}
	else if (chon == "NV") {
		if (ViTri(chon, ten, ma) != -1) {
			danhsachNV[ViTri(chon, ten, ma)].show();
		}
		else cout << "Not found!" << endl;
	}
	else if (chon == "KH") {
		cout << "So luong khach: " << danhsachKH.size();
		if (ViTri(chon, ten, ma) != -1) {
			danhsachKH[ViTri(chon, ten, ma)].show();
		}
		else cout << "Not found!" << endl;
	}
	else if (chon == "HD") {
		if (ViTri(chon, ten, ma) != -1) {
			cout << "**********************************************************************" << endl;
			danhsachHD[ViTri(chon, ten, ma)].show();
		}
		else cout << "Not found!" << endl;
	}
}

void QLDT::Output(string chon)
{
	if (chon == "DT") {
		ofstream outputDT("dienthoai.txt");
		for (int i = 0; i < danhsachDT.size(); i++) {
			outputDT << danhsachDT[i].getMadt() << ", ";
			outputDT << danhsachDT[i].getTen() << ", ";
			outputDT << danhsachDT[i].getManhinh() << ", ";
			outputDT << danhsachDT[i].getChip() << ", ";
			outputDT << danhsachDT[i].getCameratruoc() << " ";
			outputDT << danhsachDT[i].getCamerasau() << " ";
			outputDT << danhsachDT[i].getPin() << " ";
			outputDT << danhsachDT[i].getHang() << " ";
			outputDT << danhsachDT[i].getRam() << " ";
			outputDT << danhsachDT[i].getDungluong() << " ";
			outputDT << danhsachDT[i].getMau() << " ";
			outputDT << danhsachDT[i].getSoluong() << " ";
			outputDT << danhsachDT[i].getGia() << " ";
			outputDT << danhsachDT[i].getGiamgia() << endl;
		}
		outputDT.close();
	}
	else if (chon == "NV") {
		ofstream outputNV("nhanvien.txt");
		for (int i = 0; i < danhsachNV.size(); i++) {
			outputNV << danhsachNV[i].getManv() << ", ";
			outputNV << danhsachNV[i].getTen() << ", ";
			outputNV << danhsachNV[i].getSdt() << ", ";
			outputNV << danhsachNV[i].getDiachi() << ", ";
			outputNV << danhsachNV[i].getGioitinh() << ", ";
			outputNV << danhsachNV[i].getNgaysinh() << ", ";
			outputNV << danhsachNV[i].getEmail() << ", ";
			outputNV << danhsachNV[i].getLuong() << endl;
		}
		outputNV.close();
	}
	else if (chon == " KH") {
		ofstream outputKH("khachhang.txt");
		for (int i = 0; i < danhsachNV.size(); i++) {
			outputKH << danhsachKH[i].getMakh() << ", ";
			outputKH << danhsachKH[i].getTen() << ", ";
			outputKH << danhsachKH[i].getSdt() << ", ";
			outputKH << danhsachKH[i].getDiachi() << ", ";
			outputKH << danhsachKH[i].getGioitinh() << ", ";
			outputKH << danhsachKH[i].getNgaysinh() << endl;
		}
		outputKH.close();
	}
	else if (chon == "HD") {
		ofstream outputHD("hoadon.txt");
		for (int i = 0; i < danhsachHD.size(); i++) {
			outputHD << danhsachHD[i].getMahoadon() << ", ";
			outputHD << danhsachHD[i].getNgayban() << ", ";
			outputHD << danhsachHD[i].getKh().getMakh() << ", ";
			outputHD << danhsachHD[i].getKh().getTen() << ", ";
			outputHD << danhsachHD[i].getNv().getManv() << ", ";
			outputHD << danhsachHD[i].getNv().getTen() << ", " << endl;
			for (int j = 0; j < danhsachHD[i].getDssp().size(); j++) {
				outputHD << danhsachHD[i].getDssp()[j].getMadt() << ", ";
				outputHD << danhsachHD[i].getDssp()[j].getTen() << ", ";
				outputHD << danhsachHD[i].getDssp()[j].getSoluong() << ", ";
				outputHD << danhsachHD[i].getDssp()[j].getGia() << ", ";
				outputHD << danhsachHD[i].getDssp()[j].getGiamgia() ;
				if(j== danhsachHD[i].getDssp().size()-1)
					outputHD << ",";
				outputHD << endl;
			}
			outputHD << danhsachHD[i].getTongtien() << endl;
		}
		outputHD.close();
	}




}

vector<Dienthoai> QLDT::getDanhsachDT()
{
	return danhsachDT;
}

vector<nhanvien> QLDT::getDanhsachNV()
{
	return danhsachNV;
}

vector<khachhang> QLDT::getDanhsachKH()
{
	return danhsachKH;
}

vector<Hoadon> QLDT::getDanhsachHD()
{
	return danhsachHD;
}
