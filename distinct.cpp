#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,temp;
        int i,count=0;
        map<string,int> mp;
        cin>>s;
        for(i=0;i<s.length()-1;i++)
        {
            temp="";
            temp+=s[i];
            temp+=s[i+1];
            //cout<<temp<<endl;
            //cout<<mp[temp]<<endl;
            if(mp[temp]!=1)
            {
                mp[temp]=1;
                count++;
            }
        }
        cout<<count<<endl;
    }

}
