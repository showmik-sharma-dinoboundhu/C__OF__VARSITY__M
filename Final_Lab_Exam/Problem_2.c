#include<stdio.h>
struct employee
{
    char name[100];
    int age;
    double salary;
};
void display(struct employee e)
{
    e.salary -= (e.salary * 23/100);
    printf("%s %d %.2lf",e.name, e.age, e.salary);
}
int main()
{
    struct employee e;
    scanf("%s %d %lf",e.name, &e.age, &e.salary);
    display(e);
    return 0;
}