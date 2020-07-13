#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
class graph
{
    public:
    int noOfNodes,i;
    node *adj;
    graph(int noOfNodes)
    {
        this->noOfNodes=noOfNodes;
        adj=new node*[noOfNodes]
        for(i=0;i<noOfNodes;i++)
            adj[i]=NULL;
    }
    addEdge(int a,int b)
    {
        node *newNOde;
        //if(adj[a]==NULL)

    }
};
int main()
{

}
