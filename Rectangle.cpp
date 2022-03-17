#include "Rectangle.h"
#include <iostream>
using namespace std;


rectangle :: rectangle(){
    
}

rectangle :: rectangle(Line l, Line h){

    length = l;
    height = h;
    
}

void rectangle :: print(){

    cout << length.lineLength() << endl;
    cout << height.lineLength();
    
}

double rectangle :: calcArea(){
    
    return length.lineLength() * height.lineLength();

    
}