#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,k,sLength;
        string s;
        cin>>s>>k;
        sLength=s.length();
        for(i=0;i<sLength;i++)
        {
            for(j=0;j<sLength-i;j++)
            {
                cout<<s.substr(i,j+1)<<endl;
            }
        }
    }
}
