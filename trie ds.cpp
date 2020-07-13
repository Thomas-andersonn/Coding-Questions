#include<bits/stdc++.h>
using namespace std;
struct trie
{
    bool isLeaf;
    trie *links[26];
};
trie *getNode()
{
    trie *newNode;
    newNode=new trie;
    newNode->isLeaf=false;
    for(int i=0;i<26;i++)
    {
        newNode->links[i]=NULL;
    }
    return newNode;
}
insert(string s,trie *currentNode)
{
    int i;
    for(i=0;i<s.size();i++)
    {
        if(!currentNode->links[s[i]-'a'])
        {
            currentNode->links[s[i]-'a']=getNode();
        }
        currentNode=currentNode->links[s[i]-'a'];
    }
    currentNode->isLeaf=true;

}
search(string s,trie *currentNode)
{
    int i;
    for(i=0;i<s.size();i++)
    {
        if(!currentNode->links[s[i]-'a'])
            return false;
        else
            currentNode=currentNode->links[s[i]-'a'];
    }
    if(currentNode->isLeaf==true)
        return true;
    return false;

}
int main()
{
    trie *root;
    root=getNode();
    insert("abc",root);
    insert("cde",root);
    cout<<search("abc",root)<<endl;
    cout<<search("zzz",root)<<endl;
    cout<<search("cde",root)<<endl;
}
