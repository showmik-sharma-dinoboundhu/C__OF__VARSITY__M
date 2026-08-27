#include<stdio.h>

struct student
{
    char name[50];
    int roll_number;
    float marks;
};

void check(struct student s)
{
    if(s.marks >= 40)
        printf("Passed");
    else
        printf("Failed");
}

int main()
{
    struct student s;

    scanf("%s %d %f", s.name, &s.roll_number, &s.marks);

    check(s);

    return 0;
}