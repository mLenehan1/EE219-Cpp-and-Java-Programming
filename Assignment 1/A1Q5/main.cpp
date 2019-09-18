#include <iostream>
#include <cstring>

using namespace std;

string helloName(string &s)
{
    string u = "Hello ", v = "!";
    s = u + s + v;
    return s;
}

int main()
{
    string yourName;
    cout << "Enter Your Name:";
    cin >> yourName;
    cout << yourName << endl;
    helloName(yourName);
    cout << yourName  << endl;
    return 0;
}
