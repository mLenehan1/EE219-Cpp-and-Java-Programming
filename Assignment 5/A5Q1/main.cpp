#include <iostream>

using namespace std;

int countOnes(int n)
{
    if(n > 0)
    {
        return countOnes(n/10) + (n%10 == 1);
    }
    else return 0;

}
int main()
{
    cout << countOnes(101170);
}
