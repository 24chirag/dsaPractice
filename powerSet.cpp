#include<iostream>
#include<vector>
using namespace std;
void powerSet(int in, vector<int> &nums,vector<<vector>> &ans,vector<int>temp)
{
	if(i==nums.size())
	{
		ans.push_back(temp);
		return;
	}
	powerSet(in+1,nums,ans,temp);
	temp.push_back(nums[i]);
	powerSet(in+1,nums,ans,temp);
}

int main()
{

//now calling function in main
}