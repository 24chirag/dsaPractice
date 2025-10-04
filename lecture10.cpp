#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v={1,2,3,4,5,6};
	auto it = lower_bound(v.begin(),v.end(),3);
	if(it==v.end())
	{
		cout<<"no element is found and its greater element"<<endl;
	}
	else{
		cout<<*(it)<<endl;
	}

	it = min_element(v.begin(),v.end());
	cout<<"minimum element is : "<<*it<<endl;

	it = max_element(v.begin(),v.end());
	cout<<"maximum element is : "<<*it<<endl;

	reverse(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}