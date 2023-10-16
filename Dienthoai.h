#pragma 
#include <iostream>
using namespace std;
class Dienthoai{
private:
    string madt,ten, manhinh, chip;
    int cameratruoc, camerasau, pin, hang, mau, ram, dungluong, soluong, giamgia;
    long long gia;
public:
    Dienthoai();
    Dienthoai(string, string, string, string, int, int, int, int, int, int, int, int, long long, int);
    void setDon(string, string, int, long long, int);
    void show() const;
    void nhap();
    void setSl(int);
    string getMadt();
    string getTen();
    string getManhinh();
    string getChip();
    int getCameratruoc();
    int getCamerasau();
    int getPin();
    int getHang();
    int getMau();
    int getRam();
    int getDungluong();
    int getSoluong();
    int getGiamgia();
    long long getGia();
    void setMadt(string);
    void setTen(string);
    void setGia(long long);
    void setGG(int);
    void setSoluong(int);
};
