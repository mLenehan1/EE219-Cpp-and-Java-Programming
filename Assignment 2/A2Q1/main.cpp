#include <iostream>

using namespace std;

void square(double &d)
{
    d=(d*d);
}

int main()
{
    double s = 9;
    cout << "s = "<< s << endl;
    square(s);
    cout << "s squared = " << s << endl;
    return 0;
}
