#include <iostream>
#include <cstring>

using namespace std;

void helloName(string s)
{
    cout << "Hello " << s << "!" << endl;
}
int main()
{
    string yourName;
    cout << "Enter Your Name:";
    cin >> yourName;
    helloName(yourName);
    //cout << "Hello " << yourName << "!" << endl;
    return 0;
}
