#include "Line.h"

class rectangle{

    public:
    rectangle();
    rectangle(Line l, Line h);
    void print();
    double calcArea();
    
    private:

    Line length;
    Line height;
    
};
