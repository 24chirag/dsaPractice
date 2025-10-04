#include<iostream>
using namespace std;
void merge(int arr[], int s,int mid,int n){
	int lsize= mid-s;
	int rsize=n-mid;
	int *larr= new int[lsize];
	int *rarr= new int[rsize];
	int k=0;
	for(int i=s;i<mid;i++)
	{
		larr[k++]=arr[i];
	}
	int j=0;
	for(int z=mid;z<n;z++)
	{
		rarr[j++]=arr[z];
	}
	cout<<"printing left array ";
	for(int i=0;i<lsize;i++)
	{
		cout<<larr[i]<<" ";
	}
	cout<<endl;
	cout<<"printing right array ";
	for(int i=0;i<rsize;i++)
	{
		cout<<rarr[i]<<" ";
	}
	cout<<endl;

	k=0;
	int i=0;
	j=0;
	while(i<lsize && j<rsize)
	{
		if(larr[i]<=rarr[j])
		{
			arr[k++]=larr[i];
			i++;
		}
		else{
			arr[k++]=rarr[j];
			j++;
		}
	}
	while(i<lsize)
	{
		arr[k++]=larr[i];
		i++;
	}
	while(j<rsize)
	{
		arr[k++]=rarr[j];
		j++;
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
	int mid =n/2;
	merge(arr,0,mid,n);
	cout<<"your sorted array is ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}