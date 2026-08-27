#include<stdio.h>

struct employee
{
    char name[50];
    int id;
    float salary;
};

void increase(struct employee *e)
{
    e->salary = e->salary + (e->salary * 10 / 100);
}

int main()
{
    struct employee e;

    scanf("%s %d %f", e.name, &e.id, &e.salary);

    increase(&e);

    printf("%s %d %.2f", e.name, e.id, e.salary);

    return 0;
}