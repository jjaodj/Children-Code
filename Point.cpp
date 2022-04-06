#include "Point.h"

Point::Point()
{
}

Point::Point(int hoanhdo, int tungdo)
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

void Point::sethoanhdo(int hoanhdo)
{
    this->hoanhdo = hoanhdo;
}

void Point::settungdo(int tungdo)
{
    this->tungdo = tungdo;
}

Point Point::tinhtien(Point b)
{
    int temptung = this->tungdo + b.gettungdo();
    int temphoanh = this->hoanhdo + b.gethoanhdo();
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

