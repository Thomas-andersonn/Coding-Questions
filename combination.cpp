#include<bits/stdc++.h>
using namespace std;
void combine(string s,string res,int i)
{
    if(i==s.size())
    {
        cout<<res<<endl;
        return;
    }
    combine(s,res,i+1);
    res=res+s[i];
    combine(s,res,i+1);

}
int main()
{
    string s="abcd";
    combine(s,"",0);

}
