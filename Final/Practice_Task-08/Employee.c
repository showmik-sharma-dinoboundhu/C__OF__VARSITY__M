#include<stdio.h>
struct Employee
{
    char name[20];
    int id;
    double salary;
};

void Increase_Salary(struct Employee *e)
{
    e->salary = e->salary + (e->salary * 10 /100);
}

int main()
{
    struct Employee e;
    scanf("%s %d %lf", e.name, &e.id, &e.salary);

    Increase_Salary(&e);

    printf("%s\n",e.name);
    printf("%d\n",e.id);
    printf("%.2lf\n",e.salary);
    return 0;
}