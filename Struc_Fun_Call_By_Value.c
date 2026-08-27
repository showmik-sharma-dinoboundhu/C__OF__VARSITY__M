#include<stdio.h>
#include<string.h>

struct myType
{
    char name[50];
    int id;
    double salary;
};

void call_by_value(struct myType em)
{
    printf("%s\n%d\n%lf\n", em.name, em.id, em.salary);
}

int main()
{
    struct myType emp;
    scanf("%s %d %lf", emp.name, &emp.id, &emp.salary);
    call_by_value(emp);
    return 0;
}