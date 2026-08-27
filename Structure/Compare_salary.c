#include<stdio.h>

struct employee
{
    char name[50];
    int id;
    float salary;
    char designation[50];
};

int main()
{
    struct employee e[2];

    for(int i = 0; i < 2; i++)
    {
        scanf("%s %d %f %s", e[i].name, &e[i].id, &e[i].salary, e[i].designation);
    }
    if(e[0].salary > e[1].salary)
    {
        printf("%s %d %.2f %s", e[0].name, e[0].id, e[0].salary, e[0].designation);
    }
    else
    {
        printf("%s %d %.2f %s", e[1].name, e[1].id, e[1].salary, e[1].designation);
    }    
    return 0;
}