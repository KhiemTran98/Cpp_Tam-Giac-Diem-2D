#include<iostream>
#include<conio.h>
#include"CTamGiac.h"
using namespace std;
void main()
{
	CTamGiac* tg = new CTamGiac();
	tg->Nhap();
	if (tg->LaHopLe())
	{
		cout << "\nDay la tam giac ";
		int loaiTG = tg->LaLoaiTamGiac();
		switch (loaiTG)
		{
		case 0:
			cout << "deu";
			break;
		case 1:
			cout << "vuong can";
			break;
		case 2:
			cout << "vuong";
			break;
		case 3:
			cout << "can";
			break;
		default:
			cout << "thuong";
			break;
		}
	}
	else
		cout << "\nTam giac khong hop le";
	delete tg;
	_getch();
}