#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > ans;
void subsetsWorker(vector<int> nums,int i,vector<int> current)
    {

        if(i==nums.size())
        {

            ans.push_back(current);
            return;
        }
        else
        {
            current.push_back(nums[i]);
            subsetsWorker(nums,i+1,current);
            current.erase(current.end()-1);
            subsetsWorker(nums,i+1,current);
        }
    }
    vector< vector<int> > subsets(vector<int>& nums) {
        vector<int> current;

        subsetsWorker(nums,0,current);
        return ans;

    }
int main()
{
    vector<int> vec;
    vector< vector<int> >ans1;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    ans1=subsets(vec);
    for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans1[i].size();j++)
                cout<<ans1[i][j]<<" ";
            cout<<endl;
        }
}
