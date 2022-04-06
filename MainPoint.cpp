#include "Point.h"

int main()
{
    Point a(2, 5);
    Point b(2, 5);
    Point c = a.tinhtien(b);
    
    c.output();
    return 0;
}

