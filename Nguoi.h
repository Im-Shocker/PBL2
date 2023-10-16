#pragma
#include <iostream>
#include "Time.h"
using namespace std;

class nguoi
{
protected:
    string ten, sdt, diachi, gioitinh, ngaysinh;
public:
    nguoi();
    nguoi(string, string, string, string, string);
    void setTen(string);
    void setSdt(string);
    void setDiachi(string);
    void setGioitinh(string);
    void setNgaysinh(string);
    string getTen();
    string getSdt();
    string getDiachi();
    string getGioitinh();
    string getNgaysinh();
    void show() const;
    void nhap();
};

class khachhang : public nguoi
{
protected:
    string makh;
public:
    khachhang();
    khachhang(string, string, string, string, string,string);
    void show() const;
    void nhap();
    string getMakh();
    void setMakh(string);
};

class nhanvien : public nguoi
{
protected:
    string manv, email;
    long long luong;
public:
    nhanvien();
    nhanvien(string, string, string, string, string, string, string, long long);
    string getManv();
    void show() const;
    void nhap();
    string getEmail();
    long long getLuong();
    void setManv(string);
    void setEmail(string);
    void setLuong(long long);
};