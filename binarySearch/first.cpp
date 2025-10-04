#include<iostream>
using namespace std;
bool binarysearch(int s,int e,int *arr,int key)
{
	if(s>e)
	{
		return false;
	}
	int mid=(s+e)/2;
	if(arr[mid]==key)
	{
		return true;
	}
	else if(arr[mid]<key)
	{
		return binarysearch(mid+1,e,arr,key);
	}
	else{
		return binarysearch(s,mid-1,arr,key);
	}
}
int main()
{
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the key value "<<endl;
	int key;
	cin>>key;
	if(binarysearch(0,n-1,arr,key))
	{
		cout<<"element is present "<<endl;
	}
	else{
		cout<<"element is not present "<<endl;
	}
}