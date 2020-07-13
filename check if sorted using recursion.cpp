#include<bits/stdc++.h>
using namespace std;
int fun(int a[],int i,int n)
{
    if(a[i]<a[i-1])
        return 0;
    if(i==n)
        return 1;
    fun(a,++i,n);
}
int main()
{
    int a[]={1,2,4,3,5},n=5;
    cout<<fun(a,1,n);
}
