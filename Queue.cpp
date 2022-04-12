#include "Queue.h"

Queue::Queue()
{
	size = 0;
	front = 0;
	back = -1;
}

void Queue::enqueue(int i)
{
	if (size == max)
	{
		cout << "Full\n";
	}
	else
	{
		size++;
		back = (back + 1) % 10; 
		
		/*Vì đây là mảng cứng nên sẽ có trường hơp khiến cho số lượng phần tử 
		thêm vào sẽ nhiều hơn 10, gây ra lỗi. Phướng pháp này giúp cho tương quan về số lượng phầntử filo và số ô của
		Queue luôn ổn định ở mức <=10*/

		list[back] = i;
	}
}

int Queue::dequeue()
{
	int value;
	if (size == 0)
	{
		cout << "Empty\n";
	}
	else
	{
		value = list[front];
		front = (front + 1) % 10;
		size--;
		if (size == 0)
		{
			front = 0;
			back = -1;
		}
	}
}

void Queue::Qfront()
{

}

