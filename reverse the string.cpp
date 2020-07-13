#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s,current;
    vector<string> stringVector;
    getline(cin,s);
    for(i=0;i<s.size();)
    {
        current="";
        while(s[i]!=' '&&s[i]!=NULL)
        {
            current+=s[i];
            i++;
        }
        stringVector.push_back(current);
        while(s[i]==' ')
        i++;
    }
    string ans="";
    for(i=stringVector.size()-1;i>=0;i--)
    {
        ans+=stringVector[i];
        ans+=" ";
    }
    cout<<ans;
}
