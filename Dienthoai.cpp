#include "Dienthoai.h"

Dienthoai::Dienthoai()
{
	this->madt = madt;
	this->ten = ten;
	this->manhinh = manhinh;
	this->chip = chip;
	this->cameratruoc = cameratruoc;
	this->camerasau = camerasau;
	this->pin = pin;
	this->hang = hang;
	this->ram = ram;
	this->dungluong = dungluong;
	this->mau = mau;
	this->soluong = soluong;
	this->gia = gia;
	this->giamgia = giamgia;
}

Dienthoai::Dienthoai(
	string madt,
	string ten,
	string manhinh,
	string chip,
	int cameratruoc,
	int camerasau,
	int pin,
	int hang,
	int ram,
	int dungluong,
	int mau,
	int soluong,
	long long gia,
	int giamgia)
{
	this->madt = madt;
	this->ten = ten;
	this->manhinh = manhinh;
	this->chip = chip;
	this->cameratruoc = cameratruoc;
	this->camerasau = camerasau;
	this->pin = pin;
	this->hang = hang;
	this->ram = ram;
	this->dungluong = dungluong;
	this->mau = mau;
	this->soluong = soluong;
	this->gia = gia;
	this->giamgia = giamgia;
}

void Dienthoai::setDon(string madt, string ten, int soluong, long long gia, int giamgia)
{
	this->madt = madt;
	this->ten = ten;
	this->soluong = soluong;
	this->gia = gia;
	this->giamgia = giamgia;
}

void Dienthoai::show() const
{
	cout << "Ma san pham: " << madt << endl;
	cout << "Ten: " << ten << endl;
	cout << "Man hinh: " << manhinh << endl;
	cout << "Chip: " << chip << endl;
	cout << "Camera truoc: " << cameratruoc << endl;
	cout << "Camera sau: " << camerasau << endl;
	cout << "Pin: " << pin << endl;
	cout << "Hang: " << hang << endl;
	cout << "Ram: " << ram << endl;
	cout << "Dung luong: " << dungluong << endl;
	cout << "Mau: " << mau << endl;
	cout << "So luong: " << soluong << endl;
	cout << "Gia: " << gia << endl;
	cout << "Giam gia: " << giamgia << endl;
}

void Dienthoai::nhap()
{
	cout << "Ma san pham: "; cin >> madt;
	cout << "Ten: "; cin >> ten;
	cout << "Man hinh: "; cin >> manhinh;
	cout << "Chip: "; cin >> chip ;
	cout << "Camera truoc: "; cin >> cameratruoc;
	cout << "Camera sau: "; cin >> camerasau;
	cout << "Pin: "; cin >> pin;
	cout << "Hang: "; cin >> hang;
	cout << "Ram: "; cin >> ram;
	cout << "Dung luong: "; cin >> dungluong;
	cout << "Mau: "; cin >> mau;
	cout << "So luong: "; cin >> soluong;
	cout << "Gia: "; cin >> gia;
	cout << "Giam gia: "; cin >> giamgia;
}

void Dienthoai::setSl(int sl)
{
	this->soluong -= sl;
}

string Dienthoai::getMadt()
{
	return madt;
}

string Dienthoai::getTen()
{
	return ten;
}

string Dienthoai::getManhinh()
{
	return manhinh;
}

string Dienthoai::getChip()
{
	return chip;
}

int Dienthoai::getCameratruoc()
{
	return cameratruoc;
}

int Dienthoai::getCamerasau()
{
	return camerasau;
}

int Dienthoai::getPin()
{
	return pin;
}

int Dienthoai::getHang()
{
	return hang;
}

int Dienthoai::getMau()
{
	return mau;
}

int Dienthoai::getRam()
{
	return ram;
}

int Dienthoai::getDungluong()
{
	return dungluong;
}

int Dienthoai::getSoluong()
{
	return soluong;
}
int Dienthoai::getGiamgia()
{
	return giamgia;
}

long long Dienthoai::getGia()
{
	return gia;
}

void Dienthoai::setMadt(string madt)
{
	this->madt = madt;
}

void Dienthoai::setTen(string ten)
{
	this->ten = ten;
}

void Dienthoai::setGia(long long gia)
{
	this->gia = gia;
}

void Dienthoai::setGG(int giamgia)
{
	this->giamgia = giamgia;
}

void Dienthoai::setSoluong(int soluong)
{
	this->soluong = soluong;
}

