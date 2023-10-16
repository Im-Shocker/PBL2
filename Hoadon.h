#pragma once
#include <iostream>
#include <vector>
#include "Dienthoai.h"
#include "Nguoi.h"
#include "Go.h"
using namespace std;

class Hoadon {
private:
	string mahoadon;
	string ngayban;
	khachhang kh;
	nhanvien nv;
	vector<Dienthoai> dssp;
	long long tongtien;
public:
	Hoadon();
	Hoadon(string, string,khachhang, nhanvien, vector<Dienthoai>,long long);
	void show();
	khachhang getKh();
	nhanvien getNv();
	vector<Dienthoai> getDssp();
	int timdt(string);
	string getMahoadon();
	string getNgayban();
	long long getTongtien();
	void setMahoadon(string);
	void setNgayban(string);
	void setKh(khachhang);
	void setNv(nhanvien);
	void setDssp(vector<Dienthoai>);
};
