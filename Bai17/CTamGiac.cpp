#include<iostream>
#include"CTamGiac.h"
using namespace std;
CTamGiac::~CTamGiac()
{
	delete A;
	delete B;
	delete C;
}
void CTamGiac::Nhap()
{
	cout << "Nhap diem A" << endl;
	A = new CDiem2D();
	A->Nhap();
	cout << "Nhap diem B" << endl;
	B = new CDiem2D();
	B->Nhap();
	cout << "Nhap diem C" << endl;
	C = new CDiem2D();
	C->Nhap();
}
bool CTamGiac::LaHopLe()
{
	double AB = A->TinhKhoangCach(B);
	double AC = A->TinhKhoangCach(C);
	double BC = B->TinhKhoangCach(C);
	if (AB + AC <= BC)
		return false;
	if (AB + BC <= AC)
		return false;
	if (AC + BC <= AB)
		return false;
	return true;
}
int CTamGiac::LaLoaiTamGiac()
{
	double a = A->TinhKhoangCach(B);
	double b = A->TinhKhoangCach(C);
	double c = B->TinhKhoangCach(C);
	if (a == b && b == c)
		return 0; //deu
	bool LaTGCan = false;
	if (a == b || b == c || a == c)
		LaTGCan = true;
	bool LaTGVuong = false;
	if (a*a + b*b == c*c)
		LaTGVuong = true;
	if (b*b + c*c == a*a)
		LaTGVuong = true;
	if (a*a + c*c == b*b)
		LaTGVuong = true;
	if (LaTGVuong && LaTGCan)
		return 1; //vuong can
	if (LaTGVuong)
		return 2; //vuong
	if (LaTGCan)
		return 3; //can
	return 4; //thuong
}