#include "Tringle.h"

Tringle::Tringle(){}

Tringle::Tringle(Point A, Point B, Point C)
{
	this->A = A;
	this->B = B;
	this->C = C;
}

Tringle::~Tringle(){}

void Tringle::tinhtien(Point Z)
{
	A.tinhtien(Z);
	B.tinhtien(Z);
	C.tinhtien(Z);
}

void Tringle::quay(float goc)
{
	A.quay(goc);
	B.quay(goc);
	C.quay(goc);
}

void Tringle::input()
{
	cout << "Nhap dinh A: "<<endl;
	A.input();
	cout << endl << "Nhap dinh B: "<<endl;
	B.input();
	cout << endl << "Nhap dinh C: "<<endl;
	C.input();
}

void Tringle::output()
{
	cout << "Tam giác mới được tạo thành sau các phép biến đổi có ba đỉnh lần lượt là " << endl;
	cout << 'A' << '(' << A.gethoanhdo() << ':' << A.gettungdo() << ')' << endl;
	cout << 'B' << '(' << B.gethoanhdo() << ':' << B.gettungdo() << ')' << endl;
	cout << 'C' << '(' << C.gethoanhdo() << ':' << C.gettungdo() << ')' << endl;
}

void Tringle::zoom(float k)
{
	A.sethoanhtung(A.gethoanhdo() * k, A.gettungdo() * k);
	B.sethoanhtung(B.gethoanhdo() * k, B.gettungdo() * k);
	C.sethoanhtung(C.gethoanhdo() * k, C.gettungdo() * k);
}