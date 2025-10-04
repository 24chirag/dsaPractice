#include<iostream>
using namespace std;
int subseq(string input , string*output)
{
	if(input.size()==0)
	{
		output[0]="";
		return 1;
	}
	int smallsize;
	smallsize=subseq(input.substr(1),output);
	for(int i=0;i<smallsize;i++)
	{
		output[i+smallsize]=output[i]+input[0];
	}

	return smallsize*2;

}
void printSubsequence(string input , string ans)
{
	if(input.size()==0)
	{
		cout<<ans<<" ";
		return ;
	}

	printSubsequence(input.substr(1),ans+input[0]);
	printSubsequence(input.substr(1),ans);
}
void printSubsequenceIndex(int index,string input , string ans)
{
	if(index==input.size())
	{
		cout<<ans<<" ";
		return ;
	}

	printSubsequenceIndex(index+1,input,ans+input[index]);
	printSubsequenceIndex(index+1,input,ans);
}
int main()
{
	string ch;
	cin>>ch;
	cout<<"your entered string is "<<ch<<endl;
	// string output[100];
	// int size = subseq(ch,output);
	// for(int i=0;i<size;i++)
	// {
	// 	cout<<output[i]<<" ";
	// }
	// printSubsequence(ch,"");
	printSubsequenceIndex(0,ch,"");
}