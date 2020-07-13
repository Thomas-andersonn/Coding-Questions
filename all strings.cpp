#include<bits/stdc++.h>
using namespace std;
string s="",t="abc";
int i=0;
void fun(int n)
{
    if(n<1)
    {
        i++;
        cout<<i<<endl;
        cout<<s<<endl;
        return;
    }
    for(int i=0;i<t.length();i++)
    {
        string temp=s;
        s+=t[i];
        fun(n-1);
        s=temp;
    }
}

int main()
{
    fun(t.length());
}
