#include<iostream>
using namespace std;
int toDec(char ch)
{
    if(ch>='a')
        return 10+(ch-'a');
    else
    return ch - '0';
}
int pow(int a,int b)
{
    if(b==0)
        return 1;
    return a*pow(a,b-1);

}
int hexToDec(string hex)
{
    int ans=0;
    for(int i=0;i<hex.size();i++)
    {
        int temp=toDec(hex[i]);
        ans+=temp*pow(16,hex.size()-i-1);
    }
    return ans;
}
int main()
{
    string hex="ab1c0";
    cout<<hexToDec(hex);
}
