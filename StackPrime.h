#pragma once

#include <iostream>

using namespace std;
template <class p>

class Stack
{
    public:

        Stack(int);
        ~Stack();
        bool empty() const;
        bool full() const;
        bool push(const p&);
        bool pop(p&);

    private:

        int size;
        int top;
        p* prime;
};

