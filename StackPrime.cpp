#include "StackPrime.h"

template<class p>
Stack<p>::Stack(int n)
{
	if (n > 0 && n < 1000)
		size = n;
	else
		size = 10;
	top = -1;
	prime = new p[size];
}

template<class p>
Stack<p>::~Stack()
{
	delete[] prime;
}

template <class p>
bool Stack<p>::empty() const
{
	if (top == -1)
		return true;
	return false;
}

template<class p>
bool Stack<p>::full() const
{
	if (top == size)
		return true;
	return false;
}

template<class p>
bool Stack<p>::push(const p& i)
{
	if (!full())
	{
		top++;
		prime[top] = i;
		return true;
	}
	return false;
}

template<class p>
bool Stack<p>::pop(p& i)
{
	if (!empty())
	{
		i = prime[top];
		top--;
		return true;
	}
	return false;
}

int main()
{
	int n,dem=0;
	cout << "Nhap so can phan tich: ";
	cin >> n;
	int m = n;
	Stack<int> a(100);
	for (int i = 2; i * i <= n; ++i)
		while (n % i == 0)
		{
			a.push(i);
			n /= i;
		}
	if (n != 1)
		a.push(n);
		
	cout << m << '=';
	int temp;
	while (a.pop(temp))
		cout << temp << '*';

	return 0;
}