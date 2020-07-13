#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreater(vector<int> &A) {
    int ASize=A.size(),i;
    int a[ASize];
    vector<int> ans;
    stack< pair<int,int> > stck;
    pair<int,int> temp;
    temp.first=A[0];
    temp.second=0;

    stck.push(temp);
    for(i=1;i<ASize;i++)
    {
        temp.first=A[i];
        temp.second=i;
        if(!stck.empty())
        {
            while(!stck.empty()&&A[i]>stck.top().first)
            {
                a[stck.top().second]=A[i];
                stck.pop();
            }
            stck.push(temp);
        }

    }
    while(!stck.empty())
    {
        a[stck.top().second]=-1;
        stck.pop();
    }
    for(i=0;i<ASize;i++)
    {
        ans.push_back(a[i]);
    }
    return ans;
}
int main()
{
    int a[]={4,5,2,10},i;
    vector<int> A,B;
    int aSize=sizeof(a)/sizeof(a[0]);
    for(i=0;i<aSize;i++)
    {
        A.push_back(a[i]);
    }
    B=nextGreater(A);
    for(i=0;i<B.size();i++)
        cout<<B[i]<<" ";
}
