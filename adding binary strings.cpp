#include<bits/stdc++.h>
using namespace std;
unsigned long long  toInt(string A)
{
    unsigned long long i;
    unsigned long long total=0;
    int size=A.size()-1;
    for(i=size;i>=0;i--)
    {
        total+=pow(2,size-i)*(A[i]-'0');
    }
    return total;
}
string toBinary(int C)
{
    long long int i;
    string ans="";
    for(i=C;i>0;i=i/2)
    {
        string temp="";
        temp+=((i%2)+'0');
        ans=temp+ans;
    }
    return ans;
}
string addBinary(string A, string B) {
    int i=A.size()-1,j=B.size()-1,carry=0;
    string ans="";
    while(i>=0&&j>=0)
    {
        if(A[i]=='1'&&B[j]=='1')
        {
            if(carry==0)
            ans="0"+ans;
            else
            ans="1"+ans;
            carry=1;
        }
        else if((A[i]-'0')|(B[j]-'0'))
        {
            if(carry==0)
                ans="1"+ans;
            else
            {
                ans="0"+ans;
            }
        }
        else
        {
            if(carry==1)
                ans="1"+ans;
            else
                ans="0"+ans;
            carry=0;
        }
        i--;
        j--;
        cout<<ans<<endl;
    }
    while(i>=0)
    {
        if(A[i]=='1'&&carry==1)
            ans="0"+ans;
        else if((A[i]-'0')|carry)
        {
            ans="1"+ans;
            carry=0;
        }
        else
        {
            ans="0"+ans;
        }
        i--;
    }
    while(j>=0)
    {
        if(B[j]=='1'&&carry==1)
            ans="0"+ans;
        else if((B[j]-'0')|carry)
        {
            ans="1"+ans;
            carry=0;
        }
        else
        {
            ans="0"+ans;
        }
        j--;
    }
    if(carry==1)
        ans="1"+ans;
    return ans;
}
int main()
{
    cout<<addBinary("1010110111001101101000","1000011011000000111100110");
    //cout<<toBinary(6);
    //cout<<toInt("101111000100100100111110010010101110101001100100101001111010011000000110");
    //cout<<toInt("1110000000010110111010100100111")<<endl;
    //cout<<toInt("101001")<<endl;
    //cout<<toInt("1110000000010110111010101010000");
    //cout<<addBinary("1010110111001101101000","1000011011000000111100110");
}
