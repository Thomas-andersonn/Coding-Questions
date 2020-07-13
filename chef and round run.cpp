#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,j,startPt,current,prev,count=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            cout<<"i :"<<i<<endl;;
            current=i;
            prev=i;
            startPt=i;
            for(j=i+a[i]+1;;)
            {
                j=j%n;
                cout<<"j :"<<j<<"a[j] "<<a[j]<<endl;

                current=j;
                if(prev<startPt&&current>startPt)
                    break;
                if(current==startPt)
                {
                    count++;
                    break;
                }
                if(prev==current)
                    break;
                j=j+a[j]+1;
                j=j%n;
                prev=current;
            }
        }
        cout<<count<<endl;
    }
}

