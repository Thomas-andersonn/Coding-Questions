#include<bits/stdc++.h>
using namespace std;
int main()
{
    char temp;
    map<int,int> m;
    m[1]=3;
    m[2]=4;
    m[3]=5;
    map<int,int>::iterator it;
    it=m.find(2);
    if(it!=m.end())
        cout<<"found it";
}
