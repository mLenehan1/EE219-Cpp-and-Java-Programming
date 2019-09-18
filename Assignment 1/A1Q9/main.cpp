#include <iostream>

using namespace std;


void reverse(int a[], int  length)
{
    int temp, i;
    for (i = 0; i < length/2; ++i) {
    swap(a[length-i-1], a[i]);
    }
for (i = 0; i < length; ++i) {
    cout << a[i] << " ";
}
}
int main()
{
    int a[9] = {1,2,3,4,5,6,7,8,9};
    reverse(a, 9);
}
