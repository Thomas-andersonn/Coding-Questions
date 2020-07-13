#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &v,int start,int mid,int end)
{
    int i=start,j=mid,k=start;
    vector<int> tempV(v.size(),0);
    while(i<mid&&j<=end)
    {
        if(v[i]<v[j])
        {
            tempV[k++]=v[i++];
        }
        else
        {
            tempV[k++]=v[j++];
        }
    }
    while(i<mid)
    {
        tempV[k++]=v[i++];
    }
    while(j<=end)
    {
        tempV[k++]=v[j++];
    }
    int l;
    for(l=start;l<=end;l++)
    {
        v[l]=tempV[l];
    }
}
void mergeSort(vector<int> &v,int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        mergeSort(v,start,mid);
        mergeSort(v,mid+1,end);
        merge(v,start,mid+1,end);
    }
}

int main()
{
    int i;
    vector<int> v;
    for(i=10;i>=1;i--)
        v.push_back(i);
    mergeSort(v,0,v.size()-1);
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
