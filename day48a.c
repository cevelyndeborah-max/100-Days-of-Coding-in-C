//Q95: Check if one string is a rotation of another.

#include <stdio.h>
int main()
{
    char word1[25],word2[25],doubleword[50];
    int i,j,len1=0,len2=0,found=0;

    fgets(word1,sizeof(word1),stdin);
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
        printf("Not rotation");
        return 0;
    }

    for(i=0;i<len1;i++)
    {
        doubleword[i]=word1[i];
        doubleword[i+len1]=word1[i];
    }
    doubleword[2*len1]='\0';

    for(i=0;i<len1;i++)
    {
        for(j=0;j<len2;j++)
        {
            if(doubleword[i+j]!=word2[j])
            {
                break;
            }
        }

        if(j==len2)
        {
            found=1;
            break;
        }
    }

    if(found==1)
    printf("Rotation");
    else
    printf("Not rotation");

    return 0;
}