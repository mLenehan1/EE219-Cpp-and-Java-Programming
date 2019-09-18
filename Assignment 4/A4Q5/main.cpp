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

Colour::Colour(int R, int G, int B)
{
    red = R;
    green = G;
    blue = B;
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
int main()
{
    Colour c1(12, 15, 66);
    cout << c1.r() << endl;
    cout << c1.g() << endl;
    cout << c1.b() << endl;
    c1.print();
}
