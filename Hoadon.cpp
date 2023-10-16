#include "Hoadon.h"

Hoadon::Hoadon()
{
	this->mahoadon = mahoadon;
	this->ngayban = ngayban;
	this->kh = kh;
	this->dssp = dssp;
	this->tongtien = tongtien;
}

Hoadon::Hoadon(string mahoadon, string ngayban, khachhang kh, nhanvien nv, vector<Dienthoai> dssp,long long tongtien)
{
	this->mahoadon = mahoadon;
	this->ngayban = ngayban;
	this->kh = kh;
	this->nv = nv;
	this->dssp = dssp;
	this->tongtien = tongtien;
}

void Hoadon::show() 
{
	cout << "Ma hoa don: " << mahoadon ;
	Time nb(ngayban);
	gotoxy(40, wherey());
	cout << "Ngay ban: " << nb << endl;
	cout << "Ma khach hang: " << kh.getMakh() << endl;
	cout << "Ten khach hang: " << kh.getTen() ;
	gotoxy(40, wherey()-1 );
	cout << "Ma nhan vien: " << nv.getManv();
	gotoxy(40, wherey()+1);
	cout << "Ten nhan vien: " << nv.getTen() << endl;
	cout << "______________________________________________________________________" << endl;
	int i = 0;//22 , 12
	cout << "Ma san pham |     Ten san pham     | So luong |     Gia     | Giam Gia" << endl; //13,15,11,6,9
	for (int i = 0; i < dssp.size(); i++) {
		int y = wherey();
		cout << dssp[i].getMadt() ;
		int d = dssp[i].getTen().size() - 12;
		if (d >=4) d = 4;
		gotoxy(17 -d, y);
		cout << dssp[i].getTen() ;
		gotoxy(40, y);
		cout << dssp[i].getSoluong() ;
		gotoxy(51, y);
		cout << dssp[i].getGia() ;
		gotoxy(65, y);
		cout << dssp[i].getGiamgia() << endl;
	}
	cout << "______________________________________________________________________" << endl;
	cout << "Tong tien: " << tongtien << endl;
}

khachhang Hoadon::getKh()
{
	return kh;
}

vector<Dienthoai> Hoadon::getDssp()
{
	return dssp;
}

int Hoadon::timdt(string ma)
{
	for (int i = 0; i < dssp.size(); i++) {
		if (dssp[i].getMadt() == ma) return i;
	}
	return -1;
}

string Hoadon::getMahoadon()
{
	return mahoadon;
}

string Hoadon::getNgayban()
{
	return ngayban;
}

long long Hoadon::getTongtien()
{
	return tongtien;
}

nhanvien Hoadon::getNv()
{
	return nv;
}

void Hoadon::setMahoadon(string mahoadon)
{
	this->mahoadon = mahoadon;
}

void Hoadon::setNgayban(string ngayban)
{
	this->ngayban = ngayban;
}

void Hoadon::setKh(khachhang kh)
{
	this->kh = kh;
}

void Hoadon::setNv(nhanvien nv)
{
	this->nv = nv;
}

void Hoadon::setDssp(vector<Dienthoai> dssp)
{
	this->dssp = dssp;
}

