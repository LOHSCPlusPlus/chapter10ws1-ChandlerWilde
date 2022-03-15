#include "Line.h"
#include <iostream>
using namespace std;

int main() {

    Point a(6, 2);
    Point b(8, 1);
    Line c(a, b);

    c.Print();
    cout << c.lineLength();

    return 0;
}
