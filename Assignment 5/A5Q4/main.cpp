#include <iostream>

using namespace std;

class DataArray{
private:
    double* val;
    int length;
public:
    DataArray(int len);
    DataArray(double* a, int len);
    double min();
    double max();
    DataArray scaleBy(double factor);
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

double DataArray::min()
{
    int low = val[0];
    for(int i = 1; i<length; i++)
    {
        if(val[i]<low)
            low = val[i];

    }
    return low;
}

double DataArray::max()
{
    int high = val[0];
    for(int i = 1; i<length; i++)
    {
        if(val[i]>high)
            high = val[i];
    }
    return high;
}

DataArray DataArray::scaleBy(double factor)
{
    double* arr = new double[length];
    for(int i = 0; i<length; i++)
    {
        arr[i] = val[i];
        arr[i]*=factor;
        cout << arr[i] << endl;
    }
        return *arr;
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
    DataArray array(arr, 5);
    cout << array.min() << endl;
    cout << array.max() << endl;
    array.scaleBy(2);
    delete ptr1;
}
