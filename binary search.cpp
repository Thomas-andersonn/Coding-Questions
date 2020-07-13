#include<bits/stdc++.h>
using namespace std;
bool binSearch(int target, vector<int> &v,int start, int end)
{
    if(start>end)
        return false;
    int mid=(start+end)/2;
    bool left=false,right=false;
    if(v[mid]==target)
        return true;
    if(v[mid]>target)
    {
        left=binSearch(target,v,start,mid-1);
        if(left)
            return true;
    }
    if(v[mid]<target)
    {
        right=binSearch(target,v,mid+1,end);
        if(right)
            return true;
    }
    return false;
}
int main()
{
    int i;
    vector<int> v;
    for(i=1;i<=10;i++)
        v.push_back(i);
    cout<<binSearch(11,v,0,v.size()-1);
}
