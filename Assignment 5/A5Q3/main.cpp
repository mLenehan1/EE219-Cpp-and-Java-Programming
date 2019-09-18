#include <iostream>

using namespace std;

class DataArray{
private:
    double* val;
    int length;
public:
    DataArray(int len);
    DataArray(double* a, int len);
    virtual ~DataArray();
};

DataArray::DataArray(int len)
{
    val = new double[len];
}

DataArray::DataArray(double* a, int len)
{
    val = new double[len];
    length = len;
    for(int i = 0; i<length; i++)
    {
        this->val[i] = a[i];
        cout << a[i] << endl;
    }
}

DataArray::~DataArray()
{
    cout << "Array Deleted" << endl;
}

int main()
{
    double arr[] = {4, 2, 13, 12, 11};
    DataArray *ptr1;
    ptr1 = new DataArray(2);
    DataArray ar(arr, 5);
    delete ptr1;
}
