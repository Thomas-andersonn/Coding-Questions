#include<iostream>
using namespace std;
int main()
{
    unsigned long long lastBit,ans=0,A;
    cin>>A;
    for(int i=A;i>0;)
    {
        lastBit=i&1;
        if(lastBit)
        ans++;
        i=i>>1;
    }
    cout<<ans;
}
