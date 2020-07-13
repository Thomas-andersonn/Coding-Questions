#include<bits/stdc++.h>
using namespace std;
void fun(int b1,int b2,string ans)
{
    if(!b1&&!b2)
    {
        cout<<ans<<endl;
    }

    if(b1<b2)
    {
        string temp=ans;
        ans+=')';
        b2--;
        fun(b1,b2,ans);
        ans=temp;
        b2++;
    }
    if(b1>0)
    {
        ans+='(';
        b1--;
        fun(b1,b2,ans);
    }


}
int main()
{
    fun(3,3,"");
}
