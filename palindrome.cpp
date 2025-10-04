#include<iostream>
using namespace std;
bool checkPalindrome(string str)
{
	// radar
	int end = str.size()-1;
	int start=0;
	while(start<=end)
	{
		if(str[start]==str[end])
		{
			start++;
			end--;

		}
		else{
			return false;
		}
	}
	return true;

}
int main()
{
	string str;
	cin>>str;
	if(checkPalindrome(str))
	{
		cout<<"it is palindrome "<<endl;
	}
	else{
		cout<<"it is not a palindrome"<<endl;
	}
}