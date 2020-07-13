#include<iostream>
#define MAX 10000
using namespace std;

int rank[MAX];
int parent[MAX];

void init()
{
    for(int i=0;i<MAX;i++)
        rank[i]=1;
    for(int j=0;j<MAX;j++)
        parent[j]=j;
}
int getParent(int x)
{
    int px=parent[x];
    if(px==x)
    {
        return px;
    }
    return getParent(px);
}
void join(int x,int y)
{
    int px=getParent(x);
    int py=getParent(y);
    if(rank[px]>rank[py])
    {
        parent[py]=parent[px];
    }
    else if(rank[py]>rank[px])
    {

        parent[px]=parent[py];
    }
    else
    {
        rank[py]++;
        parent[px]=parent[py];
    }
}

string check(int x,int y)
{
    int px=getParent(x);
    int py=getParent(y);
    if(px==py)
        return "yes";
    else
        return "no";
}
int main()
{
    init();
    join(4,5);
    join(5,6);
    join(1,3);
    join(5,3);
    join(7,6);
    join(8,9);
    cout<<check(1,4)<<endl;
    cout<<check(7,8)<<endl;
}
