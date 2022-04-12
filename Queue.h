#pragma once

#include <iostream>
#define max 100

using namespace std;

class Queue
{
		int size;
		int list[max];
		int front;
		int back;

	public:

		Queue();
		~Queue();
		void enqueue(int i);
		int dequeue();
		bool full();
		bool empty();
		void Qfront();
		void Qback();

};
