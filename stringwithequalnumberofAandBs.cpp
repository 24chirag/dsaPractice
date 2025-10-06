#include<iostream>
#include<vector>
using namespace std;
void createstring(int a,int b,string output,vector<string>&ans)
{
	if(a==0 && b==0)
	{
		ans.push_back(output);
		return;
	}
	if(a>0)
	createstring(a-1,b,output+'a',ans);
    if(b>0)
	createstring(a,b-1,output+'b',ans);

}
int main()
{
	vector<string>ans;
	string output;
	int n;
	cin>>n;
	createstring(n,n,output,ans);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	
	cout<<endl;
}