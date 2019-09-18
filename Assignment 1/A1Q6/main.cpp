#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[] = "Controlling complexity is the essence of computer programming.", *p;
    p = strtok( s, " ");
    while (p != NULL)
    {
        p[0] = toupper(p[0]);
        cout << p << std::endl;
        p = strtok(NULL, " ");
    }
    }

