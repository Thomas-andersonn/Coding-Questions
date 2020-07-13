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
    void bfs(int s)
    {
        int i;
        queue<int> q;
        int visited[noOfVertices+1];
        for(i=0;i<noOfVertices;i++)
            visited[i]=0;
        q.push(s);
        visited[s]=1;
        while(!q.empty())
        {
            int f=q.front();
            q.pop();
            cout<<f<<"->";
            list<int>::iterator j;
            for(j=adj[f].begin();j!=adj[f].end();j++)
            {
                if(visited[*j]!=1)
                {
                    q.push(*j);
                    visited[*j]=1;
                }
            }

        }

    }
};
int main()
{
    graph g(6);
    g.addEdge(1,2);
    g.addEdge(1,4);
    g.addEdge(4,5);
    g.addEdge(2,5);
    g.addEdge(4,3);
    g.addEdge(5,6);
    g.addEdge(3,6);
    g.bfs(1);

}
