#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> primes;
    int i,j;
    int visited[10000]={0};
    for(i=2;i<10000;i++)
    {
        if(visited[i]!=1)
        {

            primes.push_back(i);
            j=i;
            while(j<10000)
            {
                visited[j]=1;
                j+=i;
            }
        }
    }

}
