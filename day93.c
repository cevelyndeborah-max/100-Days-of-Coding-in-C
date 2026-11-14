//Q143: Find and print the student with the highest marks.

#include <stdio.h>
struct student
{
    char name[10];
    int roll;
    int marks;
};
int main()
{
    int n,j=0;
    printf("Number of Students:");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter name,roll no.,marks:");
        scanf("%s%d%d",s[i].name,&s[i].roll,&s[i].marks);
    }
    int large=s[0].marks;
    for(int i=0;i<5;i++)
    {
        if(s[i].marks>large)
        {
            large=s[i].marks;
            j=i;
        }
    }
    printf(" Topper:%s (Marks: %d)",s[j].name,s[j].marks);
    return 0;
}