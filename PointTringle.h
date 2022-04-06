#pragma once

#include <iostream>
#include <cmath>

using namespace std;

class Point
{
	float hoanhdo, tungdo;

public:

	Point();
	Point(float x, float y);
	~Point();

	int gethoanhdo();
	void sethoanhdo(float hoanhdo);
	void settungdo(float tungdo);
	int gettungdo();

	void sethoanhtung(float x, float y);
	void sethoanhdo();
	void settungdo();

	void input();
	void output();
	Point tinhtien(Point b);
	void quay(float goc);

};


