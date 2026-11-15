//Q144: Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>
struct student
{
    char name[10];
    int roll;
    int marks;
};
int fun(struct student s2)
{
    printf("Name: %s | Roll: %d | Marks: %d",s2.name,s2.roll,s2.marks);
    return 0;
}
int main()
{
    struct student s1={"Neha",104,92};
    fun(s1);
    return 0;
}