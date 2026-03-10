#include<iostream>
using namespace std;
void rearrange(int*arr,int n)
{
	int low=0;
	int mid=0;
	int high=n-1;
	while(mid<=high)
	{
		if(arr[mid]<0)
		{
			swap(arr[mid],arr[low]);
			mid++;
			low++;
		}
		else if(arr[mid]==0)
		{
			mid++;
		}
		else{
			swap(arr[mid],arr[high]);
			high--;
		}

	}
}
int main()
{
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	rearrange(arr,n);
	cout<<"printing rearranged array by sign"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}