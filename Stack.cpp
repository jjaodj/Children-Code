#include "Stack.h"

Stack::Stack()
{
    length = 0;
}

void Stack::push(int i)
{
    if (full()) 
    {
        cout << "Stack is full" << endl;
    }
    else {
        list[length] = i;
        length++;
    }
}

bool Stack::empty()
{
    if (length == 0) 
        return true;
}

bool Stack::full()
{
    if (length == 10) 
        return true;
}

int Stack::top()
{
    int value;
    value = list[length - 1];

    return value;
}

bool Stack::pop()
{
    int x;
    x = top();

    if (empty()) 
    {
        cout << "Stack is empty" << endl;
        return false;
    }
    else 
    {
        length--;
        return true;
    }
}
