#pragma once

#include <iostream>
#include <cmath>

using namespace std;

class Point
{
	int hoanhdo, tungdo;

public:

	Point();
	Point(int x, int y);
	~Point();

	int gethoanhdo();
	void sethoanhdo(int hoanhdo);
	void settungdo(int tungdo);
	int gettungdo();

	void sethoanhdo();
	void settungdo();

	void input();
	void output();
	Point tinhtien(Point b);
	void quay(float goc);

};

