#include<stdio.h>
#include<string.h>

struct myType
{
    char name[40];
    int id;
    double salary;
};

int main()
{
    struct myType emp;
    struct myType *p;

    p = &emp;

    strcpy(p->name, "Showmik");
    p->id = 3115;
    p->salary = 48000.800;

    printf("%s\n%d\n%lf\n",p->name, p->id, p->salary);
    printf("%s\n%d\n%lf\n",emp.name, emp.id, emp.salary);

    return 0;
}