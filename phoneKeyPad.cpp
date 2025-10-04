#include<iostream>
#include<vector>
using namespace std;
string mapping[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void phoneKeyPad(int index,string str, string temp,vector<string>&ans)
{
	//base case
	if(index==str.size())
	{
		ans.push_back(temp);
		return;
	}
	int num=str[index]-'0';
	
	string mapstring =mapping[num];
	if(mapstring.size()==0)
	{
		phoneKeyPad(index+1,str,temp,ans);
	}
	for(int i=0;i<mapstring.size();i++)
	{
		
		phoneKeyPad(index+1,str,temp+mapstring[i],ans);
	}


}
int main()
{
	string str;
	cin>>str;
	vector<string>ans;
	phoneKeyPad(0,str,"",ans);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
}