#pragma once

#include <iostream>

using namespace std;

class Time
{
	public:
	
		Time();
		~Time();
		Time(int h, int m, int s);

		void sethour(int h);
		void setminute(int m);
		void setsecond(int s);

		int gethour();
		int getminute();
		int getsecond();

	private:

		int h, m, s;

};


