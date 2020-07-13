#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int tmp=a;
    a=b;
    b=tmp;
}
int size;
void qs(int a[],int start,int end)
{
    int pivot=start;
    start++;
    int left=start,right =end;
    while(left<=right)
    {
        while(a[left]<=a[pivot]&&left<end)
            left++;
        while(a[right]>a[pivot]&&right>start)
            right--;
        cout<<"left"<<left<<"right"<<right<<endl;
        if(left<right)
        swap(a[left],a[right]);
    }
    cout<<right<<endl;

    swap(a[pivot],a[right]);
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cin>>left;
    qs(a,start,right-1);
    qs(a,right+1,end);
}
main()
{
    int a[]={5,3,1,4,2,6,9,7,8};
    size = sizeof(a)/sizeof(a[0]);
    cout<<size;
    qs(a,0,size-1);
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
}
