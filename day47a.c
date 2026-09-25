//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
int main()
{
    char word1[25],word2[25];
    int freq[26]={0};
    int i,len1=0,len2=0,found=0;
    printf("Enter first word: ");
    fgets(word1,sizeof(word1),stdin);
    printf("Enter second word: ");
    fgets(word2,sizeof(word2),stdin);
    for(i=0;word1[i]!='\n'&&word1[i]!='\0';i++)
    {
        len1++;
    }
    for(i=0;word2[i]!='\n'&&word2[i]!='\0';i++)
    {
        len2++;
    }
    if(len1!=len2)
    {
        printf("Not anagrams");
        return 0;
    }
    for(i=0;i<len1;i++)
    {
        freq[word1[i]-'a']++;
        freq[word2[i]-'a']--;
    }
    for(i=0;i<26;i++)
    {
        if(freq[i]!=0)
        {
            found=1;
            break;
        }
    }
    if(found==0)
    printf("Anagrams");
    else
    printf("Not anagrams");
    return 0;
}