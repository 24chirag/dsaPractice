#include<iostream>
using namespace std;
void stringfy(char *arr,char *brr)
{
    int l = strlen(arr);
    int k=strlen(brr);
    int ch=k-1;
    if(l==0)
    {
        return;
    }
    if(arr[0]=='x')
    {

        for(int i=l;i>0;i--)
        {
            arr[i+ch]=arr[i];
        }
        for(int p=0;p<k;p++)
        {
            arr[p]=brr[p];
        }
        stringfy(arr+3,brr);
    }
    else{
        stringfy(arr+1,brr);
    }
}
int main()
{

    char ch[200]="xabcdx";
    stringfy(ch,"chikky");
    cout<<ch<<endl;

}