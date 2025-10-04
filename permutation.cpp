#include<iostream>
#include<vector>
using namespace std;
void permute(int in, string str, vector<string> &ans)
{
	if(in==str.size())
	{
		ans.push_back(str);
		return;
	}
	for(int i=in;i<str.size();i++)
	{
		swap(str[in],str[i]);
		permute(in+1,str,ans);
		swap(str[in],str[i]);
	}
}
int main(){
	string str;
	cin>>str;
	vector<string> ans;
	permute(0,str,ans);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
}