#include "StackNum.h"

template<class s>
Stack<s>::Stack(int n)
{
	if (n > 0 && n < 1000)
		size = n;
	else
		size = 10;
	top = -1;
	d = new s[size];
}

template<class s>
Stack<s>::~Stack()
{
	delete[] d;
}

template <class s>
bool Stack<s>::empty() const
{
	if (top == -1)
		return true;
	return false;
}

template<class s>
bool Stack<s>::full() const
{
	if (top == size)
		return true;
	return false;
}

template<class s>
bool Stack<s>::push(const s& i)
{
	if (!full())
	{
		top++;
		d[top] = i;
		return true;
	}
	return false;
}

template <class s>
bool Stack<s > ::pop(s& i)
{
	if (!empty())
	{
		i = d[top];
		top--;
		return true;
	}
	return false;
}

int main()
{
	Stack<int> a(100);
	int n, du;
	cout << "Nhap so can chuyen doi:\n";
	cin >> n;
	cout << "Chon he co so can chuyen doi:\n2\n8\n16\n";
	int m,temp;
	cin >> m;
	switch (m)
	{
		case 2:
			while (n != 0)
			{
				du = n % 2;
				a.push(du);
				n /= 2;
			}
			while (a.pop(temp))
			{
				cout << temp;
			}
			break;

		case 8:
			while (n != 0)
			{
				du = n % 8;
				a.push(du);
				n /= 8;
			}
			while (a.pop(temp))
			{
				cout << temp;
			}
			break;

		case 16:
			while (n != 0)
			{
				du = n % 16;
				a.push(du);
				n /= 16;
			}
			while (a.pop(temp))
			{
				switch (temp)
				{
				case 10:
					cout << "A";
					break;

				case 11:
					cout << "B";
					break;

				case 12:
					cout << "C";
					break;

				case 13:
					cout << "D";
					break;

				case 14:
					cout << "E";
					break;

				case 15:
					cout << "F";
					break;

				default:
					cout << temp;
				}
			}
			break;
	}
	return 0;
}