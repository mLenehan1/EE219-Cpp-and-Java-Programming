#include <iostream>

using namespace std;

class Rectangle{

private:

    double length;
    double width;

public:

    Rectangle(double, double);
    double area(double, double);
    void info(double, double);
};

Rectangle::Rectangle(double l, double w){
    length = l;
    width = w;
}

double Rectangle:: area(double length, double width){
    double area = length*width;
    return area;
}

void Rectangle::info(double length, double width){
    int t;
    cout << "Length is " << length << endl;
    cout << "Width is " << width << endl;
    cout << "Area is " << length*width << endl;

}
int main()
{
    Rectangle r1(1,2);
    r1.area(1,2);
    r1.info(1,2);
}
