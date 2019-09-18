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
    bool congruent(Rectangle r);
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

bool Rectangle::congruent(Rectangle r){
    if(r.length==length&&r.width==width) return true;
    else return false;
}
int main()
{
    Rectangle r1(8.9, 12.5);  // make a rectangle

    Rectangle r2(8.9, 12.5);  // make another

    r1.info(8.9,12.5); r2.info(8.9,12.5);

    if (r1.congruent(r2))  cout << "Congruent" << endl;

    else  cout << "Not Congruent" << endl;
}
