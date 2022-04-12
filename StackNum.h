#pragma once

#include <iostream>

using namespace std;

template <class s>

class Stack
{
		int size;
		int top;
		s* d;

	public:

		Stack(int);
		~Stack();
		bool push(const s&);
		bool pop(s&);
		bool full() const;
		bool empty() const;
};