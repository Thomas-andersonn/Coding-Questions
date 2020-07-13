#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="ab",b="cd",c="abac";
    int aSize=a.size(),bSize=b.size(),i,j;
    int m[aSize+1][bSize+1];
    for(i=0;i<=aSize;i++)
        for(j=0;j<=bSize;j++)
            m[i][j]=0;
    for(i=0;i<=aSize;i++)
    {
        for(j=0;j<=bSize;j++)
        {
            if(i==0&&j==0)
                m[i][j]=1;
            else if(i==0&&b[j-1]==c[j-1])
                m[i][j]=m[i][j-1];
            else if(j==0&&a[i-1]==c[i-1])
                m[i][j]=m[i-1][j];
            else if(b[j-1]==c[i+j-1])
                m[i][j]=m[i][j-1];
            else if(a[i-1]==c[i+j-1])
                if(!m[i][j])
                    m[i][j]=m[i-1][j];
        }
    }
    if(m[aSize][bSize])
        cout<<"Yes";
    else
        cout<<"No";
}
