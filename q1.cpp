#include<bits/stdc++.h>
using namespace std;
bool isPrime(int ch)
{
    int i;
    for(i=2;i<=ch-1;i++)
        if(ch%i==0)
        return false;
    return true;
}
char nearest_prime(char input)
{
    int i;
    int distRight=0,distLeft=0;
    if(isPrime(input))
        return input;
    for(i=input+1;i<=257;i++)
    {
        if(isPrime(i))
        {
            break;
        }
    }
    distRight=i-input;
    for(i=input-1;i>=0;i--)
    {
        if(isPrime(i))
        {
            break;
        }
    }
    distLeft=input-i;
    if(distLeft<distRight)
        return (char)(input-distLeft);
    else if(distLeft>distRight)
        return (char)(input+distRight);
    else
        return (char)(input-distLeft);

}

int main()
{
    string s="AAc",ans="";
    for(int i=0;i<s.size();i++)
    {
        ans+=nearest_prime(s[i]);
    }
    cout<<ans;
}
