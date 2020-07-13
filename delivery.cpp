#include<iostream>
using namespace std;
int main()
{
    int n,m,s,g,d,i,j,totalDistance=0,minDistance;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    cin>>m;
    while(m--)
    {
        totalDistance=0;
        cin>>s>>g>>d;
        totalDistance=a[s][g]+a[g][d];
        minDistance=-a[s][d]+totalDistance;
        cout<<totalDistance<<" "<<minDistance<<endl;
    }
}
