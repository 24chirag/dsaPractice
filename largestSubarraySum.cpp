#include<iostream>
using namespace std;
int bruteforce(int arr[], int n)
{
	int maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int sum=0;
			for(int k=i;k<=j;k++)
			{
				sum=sum+arr[k];
			}
			maxi=max(maxi,sum);
		}
	}
	
	return maxi;
}
int main()
{
	int n;
	int *arr= new int[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"largest subarray sum is "<<endl;
	cout<<bruteforce(arr,n);
}