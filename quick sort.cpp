#include<iostream>
using namespace std;
#define ASIZE 8
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void quicksort(int a[],int l,int r)
{
    if(l<r)
    {
        int pivot = l,i=l+1,j=r;

        while(i<ASIZE&&a[i]<a[pivot])
            i++;
        while(j>l&&a[j]>a[pivot])
            j--;
        if(i<ASIZE&&j>l&&i<j)
            swap(a[i],a[j]);
        swap(a[j],a[pivot]);
        for(int i=0;i<ASIZE;i++)
        cout<<a[i]<<" ";
        cout<<endl;
        quicksort(a,l,j-1);
        quicksort(a,j+1,r);
    }
}
int main()
{
    int a[]={8,7,6,5,4,3,2,1};

    quicksort(a,0,ASIZE-1);

}
