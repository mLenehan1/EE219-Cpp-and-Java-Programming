#include <iostream>
#include <cstring>

using namespace std;

string cipher(string s,  int n){
    for(int i = 0;i<s.size(); i++)
        s[i] = s[i]+n;
        return s;
}

int main()
{
    string h;
    int j;
    cout << "Enter String to be encrypted: ";
    cin >> h;
    cout << endl << "Enter the value to shift each character by: ";
    cin >> j;
    cout << cipher(h, j);
}
