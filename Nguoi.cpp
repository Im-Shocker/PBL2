#include "Nguoi.h"
#include <sstream>

nguoi::nguoi()
{
	this->ten = ten;
	this->sdt = sdt;
	this->diachi = diachi;
	this->gioitinh = gioitinh;
	this->ngaysinh = ngaysinh;
}

nguoi::nguoi(string ten, string sdt, string diachi, string gioitinh, string ngaysinh)
{
	this->ten = ten;
	this->sdt = sdt;
	this->diachi = diachi;
	this->gioitinh = gioitinh;
	this->ngaysinh = ngaysinh;
}

void nguoi::setTen(string ten)
{
	this->ten = ten;
}

void nguoi::setSdt(string sdt)
{
	this->sdt = sdt;
}

void nguoi::setDiachi(string diachi)
{
	this->diachi = diachi;
}

void nguoi::setGioitinh(string gioitinh)
{
	this->gioitinh = gioitinh;
}

void nguoi::setNgaysinh(string ngaysinh)
{
	this->ngaysinh = ngaysinh;
}

string nguoi::getTen()
{
	return ten;
}

string nguoi::getSdt()
{
	return sdt;
}

string nguoi::getDiachi()
{
	return diachi;
}

string nguoi::getGioitinh()
{
	return gioitinh;
}

string nguoi::getNgaysinh()
{
	return ngaysinh;
}

void nguoi::show() const
{
	cout << "Ten: " << ten << endl;
	cout << "SDT: " << sdt << endl;
	cout << "Dia chi: " << diachi << endl;
	cout << "Gioi tinh: " << gioitinh << endl;
	Time ns(ngaysinh);
	cout << "Ngay sinh: " << ns << endl;
}

void nguoi::nhap()
{
	cin.ignore();
	cout << "Ten: "; 
	getline(cin,ten);
	cout << "SDT: "; cin >> sdt;
	cout << "Dia chi: "; 
	cin.ignore();
	getline(cin,diachi);
	cout << "Gioi tinh: "; cin >> gioitinh;
	cout << "Ngay sinh: "; cin >> ngaysinh;
}

khachhang::khachhang() : nguoi()
{
	this->makh = makh;
}

khachhang::khachhang(
	string makh,
	string ten,
	string sdt,
	string diachi,
	string gioitinh,
	string ngaysinh) : nguoi(ten, sdt, diachi, gioitinh, ngaysinh)
{
	this->makh = makh;
}
void khachhang::show() const
{
	cout << "Ma khach hang: " << makh << endl;
	nguoi::show();
}
void khachhang::nhap()
{
	cout << "Ma khach hang: "; cin >> makh;
	nguoi::nhap();
}

string khachhang::getMakh()
{
	return makh;
}

void khachhang::setMakh(string makh)
{
	this->makh = makh;
}

nhanvien::nhanvien() : nguoi()
{
	this->manv = manv;
	this->email = email;
	this->luong = luong;
}

nhanvien::nhanvien(
	string manv,
	string ten,
	string sdt,
	string diachi,
	string gioitinh,
	string ngaysinh,
	string email,
	long long luong) : nguoi(ten, sdt, diachi, gioitinh, ngaysinh)
{
	this->manv = manv;
	this->email = email;
	this->luong = luong;
}

string nhanvien::getManv()
{
	return manv;
}

string nhanvien::getEmail()
{
	return email;
}

long long nhanvien::getLuong()
{
	return luong;
}

void nhanvien::show() const
{
	cout << "Ma nhan vien: " << manv << endl;
	nguoi::show();
	cout << "Email: " << email << endl;
	cout << "Luong: " << luong << endl;
}

void nhanvien::nhap()
{
	cout << "Ma nhan vien: "; cin >> manv;
	nguoi::nhap();
	cin.ignore();
	cout << "Email: ";
	getline(cin, email);
	cout << "Luong: "; cin >> luong;
	cin.ignore();
}

void nhanvien::setManv(string manv)
{
	this->manv = manv;
}

void nhanvien::setEmail(string email)
{
	this->email = email;
}

void nhanvien::setLuong(long long luong)
{
	this->luong = luong;
}
