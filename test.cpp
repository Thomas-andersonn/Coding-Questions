#include<bits/stdc++.h>
using namespace std;
int binSearch(vector<int> &nums,float k,int left,int right)
{
    if(left>right)
        return left;
    int mid=(left+right)/2;
    if(nums[mid]==k)
        return mid;
    if(nums[mid]>k)
    {
        return binSearch(nums,k,left,mid-1);
    }
    if(nums[mid]<k)
        return binSearch(nums,k,mid+1,right);
}
int getCount(vector<int> &nums,int k)
{
    int left,right;
    left=binSearch(nums,(k-0.1),0,nums.size()-1);
    right=binSearch(nums,(k+0.1),0,nums.size()-1);
//    if(nums[left]!=k)
//        left++;
//    if(nums[right]!=k)
//        right--;
    return right-left;
}
int main()
{
    vector<int> nums;
    nums.push_back(1);

    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    cout<<getCount(nums,2);
}
