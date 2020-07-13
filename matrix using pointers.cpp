#include<bits/stdc++.h>
#include "temp.cpp"
using namespace std;
int main()
{
    int i,j,r=2,c=3;
    int **mat;
    mat = new int *[r];
    for(i=0;i<r;i++)
    {
        mat[i]=new int[c];
        for(j=0;j<c;j++)
        {
            mat[i][j]=i*c+j+1;
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;

    }
    print_hello();
    cout<<alpha<<endl;
}
