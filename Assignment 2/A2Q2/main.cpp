
#include <iostream>

using namespace std;

int countOdd(int a[], int j)
{
    int i = 0, n;
    for(n=0;n<j;n++){
    if(a[n]%2==1)
        {
            i=i+1;
        }
    }
    return i;
}
int main()
{
    int a[] = {4, 6, 8, 7, 9, 5, 11}, n = 7;
    cout<< countOdd(a, n);
    return 0;
}

