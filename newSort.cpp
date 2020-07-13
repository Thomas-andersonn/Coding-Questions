#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getSize(int n)
{
    int size=0;
    while(n>0)
    {
        n=n/10;
        size++;
    }
    return size;
}
int pow(int a,int b)
{
    if(b==0)
        return 1;
        if(b%2)
    return a*pow(a,b/2)*pow(a,b/2);
    else
        return pow(a,b/2)*pow(a,b/2);
}
int compare(int x,int y)
{
    cout<<x<<" x"<<y<<" y"<<endl;
    int xFirst,yFirst;
    int xSize=getSize(x);
    int ySize=getSize(y);
    xFirst=x*pow(10,ySize)+y;
    yFirst=y*pow(10,xSize)+x;
    cout<<xFirst<<yFirst<<endl;
    return (xFirst>yFirst);


}
string reverse(string s)
{
    string reverseString="";
    for(int i=s.size()-1;i>=0;i--)
        reverseString+=s[i];
    return reverseString;
}
string toString(int n)
{
    int i,rem;
    string s="";
    for(i=n;i>0;i=i/10)
    {
        rem=i%10;
        s+=rem+'0';
    }
    s=reverse(s);
    if(s=="")
        s="0";
    return s;
}
string largestNumber(const vector<int> &A) {
    vector<int> B;
    string ans="";
    B=A;
    sort(B.begin(),B.end(),compare);
    for(int i=0;i<B.size();i++)
        cout<<B[i]<<endl;
    for(int i=0;i<B.size();i++)
        ans+=toString(B[i]);
    return ans;
}
int main()
{
    vector<int> A;
    A.push_back(3);
    A.push_back(30);
    A.push_back(34);
    A.push_back(5);
    A.push_back(9);
    cout<<largestNumber(A);
}
