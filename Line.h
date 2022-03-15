#include "Point.h"

class Line {

    public: 
        Line(Point s, Point e);
        void Print();
        double lineLength();


    private:
        Point start;
        Point end;

};
