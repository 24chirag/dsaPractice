#include<iostream>
using namespace std;
void removeConsecutiveOcc(char* arr)
{
    int l=strlen(arr);
    if(l==0 || l==1)
    {
        return;
    }
    else if(arr[0]==arr[1])
    {
        for(int i=1;i<=l;i++)
        {
            arr[i-1]=arr[i];
        }
        removeConsecutiveOcc(arr);    
    }
    else{
        removeConsecutiveOcc(arr+1);    
    }
}
int main()
{
    char ch[]="aaabbbacdd";
    removeConsecutiveOcc(ch);
    cout<<ch<<endl;

}