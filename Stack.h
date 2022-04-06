#pragma once

#include <iostream>

using namespace std;

class Stack
{
    public:
        Stack();
        void push(int i);
        bool pop();

    
        int top();
        bool full();
        bool empty();

    private:
        int list[10];
        int length;
};