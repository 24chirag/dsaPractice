#include<iostream>
using namespace std;
void reverseArray(int *arr,int size)
{
    if(size==0 || size==1)
    {
        return;
    }

    swap(arr[0],arr[size-1]);
    reverseArray(arr+1,size-2);

}
int main()
{
    int arr[]={1,2,3,45,6,62};
    reverseArray(arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }

}