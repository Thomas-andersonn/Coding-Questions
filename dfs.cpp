#include<bits/stdc++.h>
using namespace std;
class graph
{
    public:
    int noOfVertices;
    list<int> *adj;

    graph(int noOfVertices)
    {
        this->noOfVertices=noOfVertices;
        adj=new list<int>[noOfVertices+1];
    }
    void addEdge(int a,int b)
    {
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    void dfs(int s)
    {
        int i;
        int visited[noOfVertices+1];
        for(i=0;i<noOfVertices+1;i++)
            visited[i]=0;
        stack<int> stck;
        stck.push(s);
        visited[s]=1;
        while(!stck.empty())
        {
            int top=stck.top();
            stck.pop();
            cout<<top<<"->";
            list<int>::iterator j;
            for(j=adj[top].begin();j!=adj[top].end();j++)
            {
                if(visited[*j]!=1)
                {
                    stck.push(*j);
                    visited[*j]=1;
                }
            }
        }

    }
};
int main()
{
    graph graph1(6);
    int i;

    graph1.addEdge(1,2);
    graph1.addEdge(1,4);
    graph1.addEdge(4,5);
    graph1.addEdge(2,5);
    graph1.addEdge(4,3);
    graph1.addEdge(5,6);
    graph1.addEdge(3,6);

    for(i=1;i<=6;i++)
    {
        list<int>::iterator j;
        cout<<i<<" :";
        for(j=graph1.adj[i].begin();j!=graph1.adj[i].end();j++)
        {
            cout<<*j<<" ";
        }
        cout<<endl;
    }
    graph1.dfs(1);
}
