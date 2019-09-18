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
    virtual void scaleBy(double)=0;
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
    cout << "(" << red << "," << green << "," << blue << ")" << endl;
}

Shape::Shape(int r, int g, int b):c(r, g, b){}

void Shape::print()
{
    c.print();
}



int main()
{
    Shape s1(12, 15, 60);
    s1.print();
}
