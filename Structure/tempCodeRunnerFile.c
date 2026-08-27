#include<stdio.h>

struct student
{
    char name[50];
    int roll_number;
    float marks;
};

void display(struct student s)
{
    printf("%s %d %.2f", s.name, s.roll_number, s.marks);
}

int main()
{
    struct student s;

    scanf("%s %d %f", s.name, &s.roll_number, &s.marks);

    display(s);

    return 0;
}