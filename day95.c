//Q145: Return a structure containing top student's details from a function.

#include <stdio.h>
struct student
{
    char name[10];
    int roll;
    int marks;
};
struct student fun()
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
    for(int i=0;i<n;i++)
    {
        if(s[i].marks>large)
        {
            large=s[i].marks;
            j=i;
        }
    }
    return s[j];
}
int main()
{
    struct student s2=fun();
    printf("Top Student: %s | Roll: %d | Marks: %d",s2.name,s2.roll,s2.marks);
    return 0;
}