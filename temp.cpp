#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else if(a>=b)
        return gcd(a-b,b);
    else if(a<b)
        return gcd(b-a,a);
}
int main()
{
    cout<<gcd(3,4);
}
