#include <iostream>
#include <cstring>

using namespace std;

int prefixMatch(string a, string b)
{
    int match = 0, i=0;
    if(a == b)
        match = a.size();
    else
    {
     while(a[i]==b[i])
    {
        match++;
        i++;
    }
    }
    cout << match;
    }

int main()
{
    string a = ("Hello There"), b = ("Hello");
    prefixMatch(a, b);
}
