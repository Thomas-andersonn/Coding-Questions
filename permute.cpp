#include<bits/stdc++.h>
using namespace std;
string toBin(int n)
{
    int rem;
    string ans="";
    while(n>0)
    {
        rem=n&1;
        char temp = rem+'0';
        ans=temp+ans;
        n=n>>1;
    }
    return ans;
}
string toBrackets(string s,int n)
{
    int i;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        s[i]='(';
        else
        s[i]=')';
    }
    for(i=s.size();i<n;i++)
    s='('+s;
    return s;
}
int wellFormed(string s)
{
    int i,count=0;
    int temp=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='(')
            count++;
        if(s[i]==')')
            count--;
        if(count<0)
            return temp;

    }
    if(count>0)
        return temp;
    return 1;
}
int main()
{

    int m,i,n;
    string s;
    cin>>n;
    m=pow(2,2*n);

    for(i=0;i<m;i++)
    {
        s=toBin(i);
        s=toBrackets(s,2*n);
        if(wellFormed(s))
            cout<<s<<endl;

    }
}
