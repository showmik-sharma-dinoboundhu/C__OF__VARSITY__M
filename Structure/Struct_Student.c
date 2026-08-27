#include<stdio.h>

struct student
{
    char name[50];
    int roll_number;
    float marks;
};

int main()
{
    struct student s[3];

    for(int i = 0; i < 3; i++)
    {
        scanf("%s %d %f", s[i].name, &s[i].roll_number, &s[i].marks);
    }

    for(int i = 0; i < 3; i++)
    {
        printf("%s %d %.2f\n", s[i].name, s[i].roll_number, s[i].marks);
    }

    return 0;
}