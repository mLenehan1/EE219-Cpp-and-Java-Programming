#include <iostream>

using namespace std;

int swap(int a[],int i,int j)
{
    swap(a[i], a[j]);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i, j;
    cout << "Enter the position of the numbers in the array to be swapped" << endl;
    cin >> i >> j;
    cout << "a[i]=" << a[i] << ". a[j]=" << a[j] << "." << endl;
    swap(a, i, j);
    cout << "a[i]=" << a[i] << ". a[j]=" << a[j] << "." << endl;
}
