#include<bits/stdc++.h>
using namespace std;
int uniqueMorseRepresentations(vector<string>& words)
{
    string morseAlphabets[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int i,j, wordsSize=words.size(),count=0;
    map<string,int> uniqueMap;
    for(i=0;i<wordsSize;i++)
    {
        int tempWordSize=words[i].size();
        string currentMorseString="";
        for(j=0;j<tempWordSize;j++)
        {
            currentMorseString+=morseAlphabets[words[i][j]-'a'];
        }
        if(uniqueMap[currentMorseString]==0)
        {
            count++;
            uniqueMap[currentMorseString]++;
        }
    }
    return count;
}
int main()
{

   vector<string> words;
   words.push_back("gin");
   words.push_back("zen");
   words.push_back("gig");
   words.push_back("msg");
   cout<<uniqueMorseRepresentations(words);
}
