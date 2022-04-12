#include "Stack.h"

template<class S>
Stack<S> ::Stack(int n)
{
	if (n > 0 && n < 1000)
		size = n;
	else
		size = 10;  //cơ bản là 10
	top = -1;
	d = new S[size];
}

template<class S>
Stack<S>::~Stack()
{
	delete[] d;
}

template<class S>
bool Stack<S>::push(const S& i)
{
	if (!full())
	{
		top++;
		d[top] = i;
		return true;
	}
	return false;
}

template<class S>
bool Stack<S>::pop(S& i)
{
	if (!empty())
	{
		i = d[top];
		top--;
		return true;
	}
	return false;
}

template<class S>
bool Stack<S>::empty() const
{
	if (top == -1)
		return true;
	return false;
}

template<class S>
bool Stack<S>::full() const
{
	if (top == size)
		return true;
	return false;
}

int main()
{
	Stack<int> a(10);
	for (int i = 0; i < 5; i++)
		a.push(i);
	int data;
	while (a.pop(data))
		cout << data << endl;
	return 0;
}