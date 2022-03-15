#include "Line.h"
#include <iostream>
using namespace std;
Line::Line(Point s, Point e) {

start = s;

end = e;

}

void Line :: Print(){
    cout << "start: ";
    start.print();
    cout << "end: ";
    end.print();
}

double Line :: lineLength(){

    return start.calcDistance(end);
    
}
/*
void PrintLine(Line l) {

cout << " Start";

PrintPoint(l.start);

cout << " End";

PrintPoint(l.end);

cout << endl;

}
*/
 