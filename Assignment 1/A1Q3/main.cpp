#include <iostream>
#include <cmath>

using namespace std;

float product(int a, int b)
{
    if(a==b)
        return (a*b)*2;
    else
        return (a*b);
}

int main()
{
    int a, b;
    cout << "Input the first value" << endl;
    cin >> a;
    cout << "Input the second value" << endl;
    cin >> b;
    float ans = product(a,b);
    cout << "The output is " << ans << endl;
    return 0;
}
