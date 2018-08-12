#include<iostream>
#include"CDiem2D.h"
using namespace std;
CDiem2D::CDiem2D()
{
	x = y = 0;
}
CDiem2D::~CDiem2D() {}
void CDiem2D::Nhap()
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}
double CDiem2D::TinhKhoangCach(CDiem2D* B)
{
	return sqrt(pow(this->x - B->x, 2) + pow(this->y - B->y, 2));
}