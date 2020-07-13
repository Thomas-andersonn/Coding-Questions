#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,cSum=0,tSum=0;
        cin>>n;
        int a[n][n];
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>a[i][j];

        for(j=0;j<n;j++)
        {
            i=0;
            cSum=0;
            int k=j;
            while(i<n&&k<n)
            {
                //cout<<a[i][k]<<endl;
                cSum+=a[i][k];
                i++;
                k++;
            }
            //cout<<cSum<<endl;
            if(cSum>tSum)
                tSum=cSum;

        }
        for(i=0;i<n;i++)
        {
            j=0;
            cSum=0;
            int k=i;
            while(k<n&&j<n)
            {
                //cout<<a[k][j]<<endl;
                cSum+=a[k][j];
                j++;
                k++;
            }
            //cout<<cSum<<endl;
            if(cSum>tSum)
                tSum=cSum;

        }
        cout<<tSum<<endl;
    }
}
/*
1
3
1 2 5
6 3 4
2 7 1
*/
