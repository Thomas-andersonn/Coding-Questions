#include<bits/stdc++.h>
using namespace std;
void printAll(int n,int m,string s)
{
    string temp;
    if(n==0)
    {
        cout<<s<<endl;
        return;
    }
    for(int i=0;i<m;i++)
    {
        temp=s;
        s+=i+'0';
        printAll(n-1,m,s);
        s=temp;
    }
}
int main()
{
    printAll(3,3,"");
}
