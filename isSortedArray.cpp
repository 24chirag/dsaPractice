#include <iostream>
using namespace std;
bool isArraySorted(int *arr,int size)
{
    if(size==0 || size==1)
    {
        return true;
    }
    return (arr[0]<arr[1]) && isArraySorted(arr+1,size-1);
}

int main()
{
    int arr[]={1,2,3,43,5};
    if(isArraySorted(arr,5))
    {
        cout<<"array is sorted "<<endl;
    }
    else{
        cout<<"array is not sorted "<<endl;
    }

    return 0;
}