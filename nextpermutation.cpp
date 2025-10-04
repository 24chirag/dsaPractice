#include<iostream>
#include<vector>
using namespace std;
void findpermutation(vector<int> &arr, int i, vector<vector<int>> &ans)
{

	if(i==arr.size())
	{
		ans.push_back(arr);
		return;
	}
	for(int j=i;j<arr.size();j++)
	{
		swap(arr[j],arr[i]);
		findpermutation(arr,i+1,ans);
		swap(arr[j],arr[i]);
	}
}
int main()
{
	vector<int>arr;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		arr.push_back(k);
	}
	vector<vector<int>> ans;
	sort(ans.begin(),ans.end());
	findpermutation(arr,0,ans);
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[0].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}