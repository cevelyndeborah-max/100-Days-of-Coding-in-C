//Q146: Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>
struct Date
{
    int day,month,year;
};
struct Employee
{
    char name[20];
    int ID;
    struct Date jd;
};
int main()
{
    struct Employee s;
    printf("Name:");
    scanf("%s",s.name);
    printf("ID:");
    scanf("%d",&s.ID);
    printf("Day:");
    scanf("%d",&s.jd.day);
    printf("Month:");
    scanf("%d",&s.jd.month);
    printf("Year:");
    scanf("%d",&s.jd.year);
    printf("\nName: %s | ID: %d | Joining Date: %d/%d/%d",s.name,s.ID,s.jd.day,s.jd.month,s.jd.year);
    return 0;
}