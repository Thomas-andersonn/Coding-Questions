#include<bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      //ListNode(int x) : val(x), next(NULL) {}
  }*head=NULL;
void printList(struct ListNode *current)
{
    struct ListNode *temp=current;
    while(temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
struct ListNode * reverseList(struct ListNode *headTemp)
{
    struct ListNode *prev,*current,*nextNode;
    prev=headTemp;
    current=headTemp->next;

    if(headTemp->next!=NULL)
    nextNode=headTemp->next->next;

    prev->next=NULL;

    while(current!=NULL)
    {
        current->next=prev;
        prev=current;
        current=nextNode;

        if(nextNode!=NULL)
        nextNode=nextNode->next;

    }
    return prev;
}
int main()
{
    int a[]={1},aSize,i;
    aSize=sizeof(a)/sizeof(a[0]);
    struct ListNode *newNode,*current;
    for(i=0;i<aSize;i++)
    {
        newNode=(ListNode *)malloc(sizeof(ListNode));
        newNode->val=a[i];
        newNode->next=NULL;
        if(head==NULL)
        {
            head=newNode;
            current=newNode;
        }
        else
        {
            current->next=newNode;
            current=newNode;
        }
    }
    printList(head);
    head=reverseList(head);
    printList(head);
}
