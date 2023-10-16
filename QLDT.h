#pragma once
#include <iostream>
#include "Hoadon.h"
#include <fstream>
#include <sstream>
using namespace std;
class QLDT {
private:
	vector<Dienthoai> danhsachDT;
	vector<nhanvien> danhsachNV;
	vector<khachhang> danhsachKH;
	vector<Hoadon> danhsachHD;
public:
	void Input();
	void Hienthi(string);
	void Them(string);
	int ViTri(string, string, string);
	void Xoa(string, string, string);
	void CapNhat(string, string, string);
	void TimKiem(string, string, string);
	void Output(string);
	vector<Dienthoai> getDanhsachDT();
	vector<nhanvien> getDanhsachNV();
	vector<khachhang> getDanhsachKH();
	vector<Hoadon> getDanhsachHD();
};

