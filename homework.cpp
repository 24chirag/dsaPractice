#include<iostream>
using namespace std;
void stringwithequalAB(string tillnow, int a , int b)
{
	if(a==0 && b==0)
	{
		cout<<tillnow<<" ";
	}
	if(a>0)
	{
		stringwithequalAB(tillnow+'a',a-1,b);

	}
	if(b>0)
	{
		stringwithequalAB(tillnow+'b',a,b-1);
	}
}

int main()
{
	int n;
	cin>>n;
	stringwithequalAB("",n,n);
}