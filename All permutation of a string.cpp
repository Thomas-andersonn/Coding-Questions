#include<bits/stdc++.h>
using namespace std;
void swap(char &a,char &b)
{
    char c;
    c=a;
    a=b;
    b=c;
}
void permute(string s,int l,int r)
{
    int i;
    if(l==r)
    {
        cout<<s<<endl;
        return;
    }
    for(i=l;i<=r;i++)
    {
        swap(s[l],s[i]);
        permute(s,l+1,r);
        swap(s[l],s[i]);
    }
}
int main()
{
    string s="abc";
    permute(s,0,s.size()-1);
}
