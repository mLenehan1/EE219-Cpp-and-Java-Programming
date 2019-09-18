#include <iostream>

using namespace std;

class Colour
{
protected:
    int red = 0, green = 0, blue = 0;
public:
    Colour(int r, int g, int b);
    r();
    g();
    b();
    void print();
};

class Shape
{
protected:
    Colour c;
public:
    Shape(int r, int g, int b);
    void print();
    virtual void scaleBy(double){};
};

class Circle:public Shape
{
private:
    int xpos, ypos, rads;
public:
    Circle(int r, int g, int b, int x, int y, int rad);
    void print();
    void scaleBy(double);
};

Colour::Colour(int r, int g, int b)
{
    red = r;
    green = g;
    blue = b;
}

Colour::r()
{
    return red;
}

Colour::g()
{
    return green;
}

Colour::b()
{
    return blue;
}

void Colour::print()
{
    cout << "(" << red << "," << green << "," << blue << ")";
}

Shape::Shape(int r, int g, int b):c(r, g, b){}

void Shape::print()
{
    c.print();
}

Circle::Circle(int r, int g, int b, int x ,int y, int rad):Shape(r, g, b), xpos(x), ypos(y), rads(rad)
{}

void Circle::print()
{
    c.print();
    cout << "X position" << xpos << ". Y position " << ypos << "Radius Length " <<  rads << "." << endl;
}

void Circle::scaleBy(double scale)
{
    cout << "Radius (" << rads << ") scaled by " << scale << " = " << rads*scale << endl;
}

int main()
{
    Circle c1(12, 15, 60, 0, 0, 4);
    c1.print();
    c1.scaleBy(4);
}
