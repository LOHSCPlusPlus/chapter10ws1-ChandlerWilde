#include "Rectangle.h"
#include <iostream>
using namespace std;

int main() {

    Point a(0, 3);
    Point b(0, 0);
    Point c(0, 0);
    Point d(4, 0);

    Line lineA(a, b);
    Line lineB(c, d);

    rectangle rectA(lineA, lineB);

    rectA.print();

    cout << endl << rectA.calcArea();
    
    return 0;
}
