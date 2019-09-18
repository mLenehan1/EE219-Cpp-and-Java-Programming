#include <iostream>

using namespace std;

bool isIncreasing(int ar[], int length){
    int i = 0;
    for(i=0;i<length-2;i++){
        if(ar[i]>=ar[i+1])return false;
    }
    return true;
}

int main()
{
    int a[] = {1,2,3,4,5}, length = 5;
    std::cout << std::boolalpha << isIncreasing(a, length);
}
