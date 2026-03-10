#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int kthMinimum(vector<int>&arr,int k)
{
	//make the priority queue
	priority_queue<int,vector<int>,greater<int>>pq;
	for(int i=0;i<arr.size();i++)
	{
		pq.push(arr[i]);
	}
	for(int i=1;i<k;i++)
	{
		pq.pop();
	}
	return pq.top();
}
int main()
{
	vector<int> arr;
	int n;
	cout<<"enter size of vector "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		arr.push_back(k);
	}
	int k;
	cout<<"enter the value of k ";
	cin>>k;
	cout<<"the "<<k<<"th minimum element is "<<kthMinimum(arr,k)<<endl;

}