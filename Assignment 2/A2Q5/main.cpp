#include <iostream>

using namespace std;

double average(double data[], int size)
{
    int i;
    double sum, average;
    for(i=0;i<size;i++){
        sum = sum + data[i];
    }
    return (average = sum/size);
}
int main()
{
    double data[] = {1,2,3,4,5,6,7,8},size = 8;
    cout << average(data, size);
    return 0;
}
