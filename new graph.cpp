#include<bits/stdc++.h>
using namespace std;
class graph
{
    public:
    vector<vector<int> > adjList;
    graph(int n)
    {
        vector<int> temp;
        for(int i=0;i<n;i++)
        {
            adjList.push_back(temp);
        }
    }
    void addEdge(int x,int y)
    {
        adjList[x].push_back(y);
    }
    void printAdjList()
    {
        for(int i=0;i<adjList.size();i++)
        {
            cout<<i<<": ";
            for(int j=0;j<adjList[i].size();j++)
            {
                cout<<adjList[i][j]<<"->";
            }
            cout<<endl;
        }

    }
};
int visited[4]={0};
bool dfs(graph g,int current, int target)
{
    if(current==target)
        return true;
    visited[current]=1;
    bool result=false;
    for(int i=0;i<g.adjList[current].size();i++)
    {
        if(!visited[g.adjList[current][i]])
            result=result|dfs(g,g.adjList[current][i],target);
    }
    return result;


}
int main()
{
    int i,noOfNodes=4,noOfEdges;
    graph g(noOfNodes);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    cout<<dfs(g,0,2);

}
