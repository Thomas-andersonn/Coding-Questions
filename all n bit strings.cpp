#include<bits/stdc++.h>
using namespace std;
void printAllString(int n,string s)
{
    if(n==0)
    {
        cout<<s<<endl;
        return;
    }
    string temp;
    temp=s;
    s+="0";
    printAllString(n-1,s);
    s=temp;
    s+="1";
    printAllString(n-1,s);


}
int main()
{
    string s="";
    printAllString(4,s);
}
