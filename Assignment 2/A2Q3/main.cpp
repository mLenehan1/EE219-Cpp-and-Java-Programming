#include <iostream>

using namespace std;

bool find(int val, int arr[], int size){
    int i;
    std::cout << std::boolalpha;
    for(i=0;i<size;i++){
        if(arr[i]==val)
            return true;
    }
}

int main()
{
    int a[] = {3, 6, 8, 33}, x = 8, size = 4;
    cout << find(x, a, size);
    return 0;
}
