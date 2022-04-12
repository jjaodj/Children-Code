#include "Time.h"

Time::Time()
{
}

Time::~Time(){}

Time::Time(int h, int m, int s)
{
	this->h = h;
	this->m = m;
	this->s = s;
}

void Time::sethour(int h)
{
	this->h = h;
}

void Time::setminute(int m)
{
	this->m = m;
}

void Time::setsecond(int s)
{
	this->s = s;
}

int Time::gethour()
{
	return h;
}

int Time::getminute()
{
	return m;
}

int Time::getsecond()
{
	return s;
}
