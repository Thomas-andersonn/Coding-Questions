#include<bits/stdc++.h>
using namespace std;
string s="";
void binary(int n)
{
    if(n<1)
    {
        cout<<s<<endl;
        return;
    }
    string temp=s;
    s+="0";
    binary(n-1);
    s=temp;
    s+="1";
    binary(n-1);
}
int main()
{
    binary(3);
}
