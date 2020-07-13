#include<iostream>
using namespace std;
/*vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int i,j;
    vector<int> C;
    vector<vector<int> > B;
    for(i=0;i<A.size()*2-1;i++)
    {
        if(i<A.size())
        {
            for(j=0;j<=i;j++)
                C.push_back(A[j][i-j])
        }
        else
        {
            for(j=i-A.size()+1;j<A.size();j++)
                C.push_back(A[j][i-j])
        }
        B.push_back(C);
        C.clear();
    }
}*/
void solution(int A[3][3])
{
    int i,j;
    for(i=0;i<3*2-1;i++)
    {
        if(i<3)
        {
            for(j=0;j<=i;j++)
                cout<<A[j][i-j]<<" ";
        }
        else
        {
            for(j=i-3+1;j<3;j++)
                cout<<A[j][i-j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    solution(A);

}
