/*Q128: Read a text file and count how many vowels and consonants are in the file.
 Ignore digits and special characters.*/

#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int vowels=0,consonants=0;
    fp=fopen("text.txt","r");
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }
    fclose(fp);
    printf("Vowels: %d\n",vowels);
    printf("Consonants: %d",consonants);
    return 0;
}