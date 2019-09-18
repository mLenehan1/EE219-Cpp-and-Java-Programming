#include <iostream>

using namespace std;

class Point2D{
private:
    double x, y;
public:
    Point2D();
    Point2D(double xval, double yval);
    void print();
    void set(Point2D p);
    Point2D midPoint(Point2D p1);
};

Point2D::Point2D(double xval, double yval)
{
    x = xval;
    y = yval;
}

void Point2D::print()
{
    cout << "X value = " << x << endl << "Y value = " << y << endl;
}

void Point2D::set(Point2D p)
{
    x = p.x;
    y = p.y;
}

Point2D Point2D::midPoint(Point2D p1)
{
    double midx = (p1.x-x)/2, midy = (p1.y-y)/2;
    cout << midx << " " << midy << endl;
}

int main()
{
    Point2D p(1, 2);
    p.set(p);
    Point2D p1(2, 4);
    p1.print();
    p.midPoint(p1);
}
