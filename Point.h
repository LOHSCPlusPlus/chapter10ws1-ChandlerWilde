class Point{
    public:
        Point();
        Point(double xVal, double yVal);
        double calcDistance(Point other);
        void print();

        //double getX();
        //double getY();
        //void setX(double xVal);
        //void setY(double yVal);
    private:
        double x;
        double y;
};

