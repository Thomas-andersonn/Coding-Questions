#include<bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int> &A) {
    stack<int> stck;
    int i,j,ASize=A.size(),currentSize,maxSize=INT_MIN,count;
    for(i=0;i<ASize;i++)
    {
        //cout<<"here1"<<endl;
        if(!stck.empty())
        {
            if(A[i]>stck.top())
            {
                stck.push(A[i]);
            }
            else
            {
                count=0;
                while(!stck.empty()&&A[i]<stck.top())
                {
                    //cout<<"here2"<<endl;
                    count++;
                    currentSize=stck.top()*count;
                    if(currentSize>maxSize)
                    {
                        maxSize=currentSize;
                    }
                    stck.pop();
                }
                for(j=0;j<count;j++)
                {
                    stck.push(A[i]);
                }
                stck.push(A[i]);

            }
        }
        else
        {
            stck.push(A[i]);
        }
    }
    count=0;
    while(!stck.empty())
    {
        //cout<<"here3"<<endl;
        count++;
        currentSize=stck.top()*count;
        if(currentSize>maxSize)
        {
            maxSize=currentSize;
        }
        stck.pop();
    }
    return maxSize;
}

int main()
{
    int a[]={2,1,5,6,2,3};
    int aSize = sizeof(a)/sizeof(a[0]);
    vector<int> A;
    for(int i=0;i<aSize;i++)
    {
        A.push_back(a[i]);
    }
    cout<<largestRectangleArea(A);
}
