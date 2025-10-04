#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int*arr= new int(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];

	}
	int i=0;
	int j=n-1;
	while(i<j)
	{
		swap(arr[i++],arr[j--]);
	}
	cout<<"reverse array is :"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

}