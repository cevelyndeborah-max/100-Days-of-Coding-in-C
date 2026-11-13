//Q142: Store details of 5 students in an array of structures and print all.

#include <stdio.h>
struct student
{
    char name[10];
    int roll;
    int marks;
};
int main()
{
    struct student s[5]={{"Aman",101,95},{"Asha",102,91},{"Anand",103,90},{"Ashna",104,93},{"Amina",105,99}};
    printf("Student records:-\n");
    printf("S.No  |  Name  |  Roll No.  |  Marks\n");
    printf(" 1       %s      %d         %d\n",s[0].name,s[0].roll,s[0].marks);
    printf(" 2       %s      %d         %d\n",s[1].name,s[1].roll,s[1].marks);
    printf(" 3       %s     %d         %d\n",s[2].name,s[2].roll,s[2].marks);
    printf(" 4       %s     %d         %d\n",s[3].name,s[3].roll,s[3].marks);
    printf(" 5       %s     %d         %d\n",s[4].name,s[4].roll,s[4].marks);
    return 0;
}