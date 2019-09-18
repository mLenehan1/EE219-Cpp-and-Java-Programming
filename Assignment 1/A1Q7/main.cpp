#include <iostream>

using namespace std;

int deMorgan(bool A, bool B)
{
    bool AND = !A&&B, OR = !A||!B;
    std::cout << std::boolalpha;
    cout << AND << endl;
    cout << OR << endl;
    return 0;
}
int main()
{
    bool a = false, b = true;
    deMorgan(a, b);
}
