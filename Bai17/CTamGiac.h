#include"CDiem2D.h"
class CTamGiac
{
private:
	CDiem2D *A, *B, *C;
	double r;
public:
	~CTamGiac();
	void Nhap();
	bool LaHopLe();
	int LaLoaiTamGiac();
};