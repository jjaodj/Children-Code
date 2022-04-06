#include "PointTringle.h"

Point::Point()
{
}

Point::Point(float hoanhdo, float tungdo)
{
    this->tungdo = tungdo;
    this->hoanhdo = hoanhdo;
}

Point::~Point() {}

int Point::gettungdo()
{
    return tungdo;
}

void Point::sethoanhdo()
{
}

void Point::settungdo()
{
}

int Point::gethoanhdo()
{
    return hoanhdo;
}

void Point::sethoanhdo(float hoanhdo)
{
    this->hoanhdo = hoanhdo;
}

void Point::settungdo(float tungdo)
{
    this->tungdo = tungdo;
}

Point Point::tinhtien(Point b)
{
    float temptung = this->tungdo + b.gettungdo();
    float temphoanh = this->hoanhdo + b.gethoanhdo();
    Point temp(temphoanh, temptung);
    return temp;
}
void Point::input()
{
    cout << "Nhap hoanh do: ";
    cin >> hoanhdo;
    cout << endl;
    cout << "Nhap tung do: ";
    cin >> tungdo;
}

void Point::output()
{
    cout << '(' << hoanhdo << ':' << tungdo << ')' << endl;
}

void Point::quay(float goc)
{
    hoanhdo = hoanhdo * cos(goc) - tungdo * sin(goc);
    tungdo = hoanhdo * sin(goc) + tungdo * cos(goc);
}

void Point::sethoanhtung(float x, float y)
{
    hoanhdo = x;
    tungdo = y;
}

