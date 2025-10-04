#include<iostream>
using namespace std;
void reverseArray(int arr[], int s , int e)
{
	int i=s;
	int j=e-1;
	while(i<=j)
	{
		swap(arr[i++],arr[j--]);
	}
}
void reverseKgroups(int arr[],int s , int e , int k)
{
	for(int i=0;i<e;i=i+k)
	{
		if(i+k<=e)
		reverseArray(arr,i,i+k);
	}
}
int main()
{
	int n;
	int arr[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the k size : ";
	int k;
	cin>>k;
	reverseKgroups(arr,0,n,k);
	cout<<"array after reversing in k groups are "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

}