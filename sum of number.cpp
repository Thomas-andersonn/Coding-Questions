#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target)
{
    int i,numsSize=nums.size(),j;
    vector<int> ans;

    vector< pair<int,int> > nums2;
    pair<int,int> temp;
    //sort(nums.begin(),nums.end());
    for(i=0;i<numsSize;i++)
    {
        temp=make_pair(nums[i],i);
        nums2.push_back(temp);
    }
    sort(nums2.begin(),nums2.end());
    i=0;
    j=numsSize-1;
    while(i<j)
    {
       if(nums2[i].first+nums2[j].first>target)
       {
           j--;
       }
       else if(nums2[i].first+nums2[j].first<target)
       {
           i++;
       }
       else
       {
           ans.push_back(nums2[i].second);
           ans.push_back(nums2[j].second);
           cout<<ans[0]<<" "<<ans[1];
           return ans;
       }
    }



}
int main()
{
    vector<int> question;
    question.push_back(3);
    question.push_back(2);
    question.push_back(4);
    vector<int> ans;
    ans=twoSum(question,6);
    //cout<<"here"<<endl;
    //cout<<ans[0]<<" "<<ans[1];
}
