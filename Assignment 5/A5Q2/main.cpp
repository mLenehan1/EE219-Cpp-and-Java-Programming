#include <iostream>

using namespace std;

bool isPowerOf(int num, const int base)
{
    if(num%base == 0){
        if(num/base == 1) return true;
        else return isPowerOf(num/base, base);}
    else return false;
}

int main()
{
    cout << isPowerOf(32, 2);
}
