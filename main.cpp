#include <iostream>
#include "QLDT.h"
using namespace std;
void menu();
void menuNV();
void menuKH();
void menuDT();
void menuHD();
void XuliDiChuyen(int &lc, int dau, int cuoi);
int main() {
	QLDT QL;
	QL.Input();
	Nocursortype();
	do {
		int l=0;
		menu();		
		XuliDiChuyen(l, 1, 5);
		switch (l) {
		case 1: {
			do {
				system("cls");
				menuNV();
				int n;
				XuliDiChuyen(n, 1, 6);
				gotoxy(0, 9);
				if (n == 1)	QL.Them("NV");
				else if (n == 2) QL.Hienthi("NV");
				else if (n == 3) {
					QL.Hienthi("NV");
					string ten, ma;
					do {
						cout << "Nhap ma nhan vien can xoa: ";
						cin >> ma;
						cout << "Nhap ten Nhan Vien can xoa: ";		
						getline(cin, ten); 
						if (QL.ViTri("NV", ten, ma) < 0)
							cout << "Nhan Vien khong ton tai!" << endl;
						else break;
					} while (1);
					QL.Xoa("NV", ten, ma);
				}
				else if (n == 4) {
					QL.Hienthi("NV");
					string ten, ma;
					do {
						cout << "Nhap ma nhan vien can sua: ";
						cin >> ma;
						cout << "Nhap ten Nhan Vien can sua: ";
						getline(cin, ten);
						if (QL.ViTri("NV", ten, ma) < 0)
							cout << "Nhan Vien khong ton tai!" << endl;
						else break;
					} while (1);
					QL.CapNhat("NV", ten, ma);
				}
				else if (n == 5) {
					string ten, ma;
					cout << "Nhap ma nhan vien can tim: ";
					cin >> ma;
					cout << "Nhap ten nhan vien can tim: ";
					cin.ignore();
					getline(cin, ten);
					QL.TimKiem("NV", ten, ma);
				} 
				else if (n == 0) break;
				system("pause");
			} while (1);
			break;
			}
		case 2: {
			do {
				system("cls");
				menuKH();
				int n;
				XuliDiChuyen(n, 1, 6);
				gotoxy(0, 9);
				if (n == 1)	QL.Them("KH");
				else if (n == 2) QL.Hienthi("KH") ;
				else if (n == 3) {
					QL.Hienthi("KH");
					string ten, ma;
					do {
						cout << "Nhap ma khach hang can xoa: ";
						cin >> ma;
						cout << "Nhap ten Khach hang can xoa: ";
						getline(cin, ten);
						if (QL.ViTri("KH", ten, ma) < 0)
							cout << "Khach hang khong ton tai!" << endl;
						else break;
					} while (1);
					QL.Xoa("KH", ten, ma);
				}
				else if (n == 4) {
					QL.Hienthi("KH");
					string ten, ma;
					do {
						cout << "Nhap ma khach hang can sua: ";
						cin >> ma;
						cout << "Nhap ten Khach hang can sua: ";
						getline(cin, ten);
						if (QL.ViTri("KH", ten, ma) < 0)
							cout << "Khach hang khong ton tai!" << endl;
						else break;
					} while (1);
					QL.CapNhat("KH", ten, ma);
				}
				else if (n == 5) {
					string ten, ma;
					cout << "Nhap ma khach hang can tim: ";
					cin >> ma;
					cout << "Nhap ten can tim: ";
					cin.ignore();
					getline(cin, ten);
					QL.TimKiem("KH", ten, ma);
				}
				else if (n == 0) break;
				system("pause");
			} while (1);
			break;
		}
		case 3: {
			do {
				system("cls");
				menuDT();
				int n;
				XuliDiChuyen(n, 1, 6);
				gotoxy(0, 9);
				if (n == 1)	QL.Them("DT");
				else if (n == 2) QL.Hienthi("DT");
				else if (n == 3) {
					QL.Hienthi("DT");
					string ten, ma;
					do {
						cout << "Nhap ma san pham can xoa: ";
						cin >> ma;
						cout << "Nhap ten san pham can xoa: ";
						getline(cin, ten);
						if (QL.ViTri("DT", ten, ma) < 0)
							cout << "San pham khong ton tai!" << endl;
						else break;
					} while (1);
					QL.Xoa("DT", ten, ma);
				}
				else if (n == 4) {
					QL.Hienthi("DT");
					string ten, ma;
					do {
						cout << "Nhap ma san pham can sua: ";
						cin >> ma;
						cout << "Nhap ten san pham can sua: ";
						getline(cin, ten);
						if (QL.ViTri("DT", ten, ma) < 0)
							cout << "San pham khong ton tai!" << endl;
						else break;
					} while (1);
					QL.CapNhat("DT", ten, ma);
				}
				else if (n == 5) {
					string ten, ma;
					cout << "Nhap ma san pham can tim: ";
					cin >> ma;
					cout << "Nhap ten can tim: ";
					cin.ignore();
					getline(cin, ten);
					QL.TimKiem("DT", ten, ma);
				}
				else if (n == 0) break;
				system("pause");
			} while (1);
			break;
		}
		case 4: {
			do {
				system("cls");
				menuHD();
				int n;
				XuliDiChuyen(n, 1, 4);
				gotoxy(0, 7);
				if (n == 1)	QL.Them("HD");
				else if (n == 2) QL.Hienthi("HD");
				else if (n == 3) {
					string ten, ma, mak;
					cout << "Nhap ma hoa don can tim: ";
					cin >> ma;
					cout << "Nhap ma khach hang can tim: ";
					cin >> mak;
					cout << "Nhap ten khach hang can tim: ";
					cin.ignore();
					getline(cin, ten);	
					QL.TimKiem("HD", mak, ma); 
				}
				else if (n == 0) break;
				system("pause");
			} while (1);
			break;
		}
		case 0: { 
			return 0;
		} 
		}
		system("cls");
	} while (1);
}
void menu() {
	cout << " __________MENU__________"<<endl;
	cout << "|> 1. Nhan vien.         |"<<endl;
	cout << "|  2. Khach hang.        |"<<endl;
	cout << "|  3. San pham.          |"<<endl; 
	cout << "|  4. Hoa don.           |"<<endl;
	cout << "|  0. Thoat.             |" << endl;
	cout << "|________________________|"<<endl;
}

void menuNV()
{
	cout << " _______________NHAN VIEN______________" << endl;
	cout << "|> 1. Them nhan vien.                   |" << endl;
	cout << "|  2. Hien thi danh sach nhan vien.     |" << endl;
	cout << "|  3. Xoa nhan vien.                    |" << endl;
	cout << "|  4. Cap nhat thong tin nhan vien.     |" << endl;
	cout << "|  5. Tim kiem nhan vien.               |" << endl;
	cout << "|  0. Tro lai.                          |" << endl;
	cout << "|_______________________________________|" << endl;
}

void menuKH()
{
	cout << " _______________KHACH HANG______________" << endl;
	cout << "|> 1. Them khach hang.                   |" << endl;
	cout << "|  2. Hien thi danh sach khach hang.     |" << endl;
	cout << "|  3. Xoa khach hang.                    |" << endl;
	cout << "|  4. Cap nhat thong tin khach hang.     |" << endl;
	cout << "|  5. Tim kiem khach hang.               |" << endl;
	cout << "|  0. Tro lai.                           |" << endl;
	cout << "|________________________________________|" << endl;
}

void menuDT()
{
	cout << " _______________SAN PHAM_______________" << endl;
	cout << "|> 1. Them san pham.                   |" << endl;
	cout << "|  2. Hien thi danh sach san pham.     |" << endl;
	cout << "|  3. Xoa san pham.                    |" << endl;
	cout << "|  4. Cap nhat thong tin san pham.     |" << endl;
	cout << "|  5. Tim kiem san pham.               |" << endl;
	cout << "|  0. Tro lai.                         |" << endl;
	cout << "|______________________________________|" << endl;
}

void menuHD()
{
	cout << " _______________HOA DON_______________" << endl;
	cout << "|> 1. Them hoa don.                   |" << endl;
	cout << "|  2. Hien thi danh sach hoa don.     |" << endl;
	cout << "|  3. Tim kiem hoa don.               |" << endl;
	cout << "|  0. Tro lai.                        |" << endl;
	cout << "|_____________________________________|" << endl;
}

void XuliDiChuyen(int &lc, int dau, int cuoi)
{
	int x = 1, y = 1;
	gotoxy(x, y);
	int xcu, ycu;
	do {
		if (_kbhit()) {
			xcu = x;
			ycu = y;
			char kitu = _getch();
			Sleep(10);
			if (kitu == 'w' && y != dau) y--;
			else if (kitu == 's' && y != cuoi) y++;
			else if (kitu == 13) {
				if (y != cuoi)
					lc = y;
				else lc = 0;
				break;
			}
			gotoxy(xcu, ycu);
			cout << " ";
			gotoxy(x, y);
			cout << ">";
		}
	} while (1);
}
