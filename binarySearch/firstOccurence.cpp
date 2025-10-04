#include<iostream>
using namespace std;
int firstOccurence(int s, int e ,int *arr , int key,int &sol)
{
	
	if(s>e)
	{
		return sol;
	}
	int mid =(s+e)/2;
	if(arr[mid]==key)
	{
		sol=mid;
		return firstOccurence(s,mid-1,arr,key,sol);
	}
	else if(arr[mid]<key)
	{
		return firstOccurence(mid+1,e,arr,key,sol);
	}
	else{
		return firstOccurence(s,mid-1,arr,key,sol);
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
	int sol=-1;

	int ans = firstOccurence(0,n-1,arr,key,sol);
	if(ans<0)
	{
		cout<<"element is not present"<<endl;
	}
	else{
		cout<<"element's firstOccurence is "<<ans<<endl;
	}
}