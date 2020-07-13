#include<bits/stdc++.h>
using namespace std;
int count1=0;
void permute(int a[],int i,int n)
{
    int j;
    if(i==n)
    {
        for(j=0;j<n;j++)
            cout<<a[j]<<" ";
        cout<<endl;
        count1++;
    }
    for(j=i;j<n;j++)
    {
        swap(a[i],a[j]);
        permute(a,i+1,n);
        swap(a[i],a[j]);
    }
}
int main()
{
    int a[]={1,2,3,4,5};
    permute(a,0,sizeof(a)/sizeof(a[0]));
    cout<<endl<<"Count :"<<count1<<endl;
}
