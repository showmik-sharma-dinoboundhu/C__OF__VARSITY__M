#include<stdio.h>
struct Student
{
    char name[200];
    int roll_num;
    double marks;

};

void Display_Details(struct Student a)
{
    printf("\nStudent \n");
    printf("%s\n", a.name);
    printf("%d\n",a.roll_num);
    printf("%.2lf\n",a.marks);
}

int main()
{   
    struct Student a;
    scanf("%s %d %lf", a.name, &a.roll_num, &a.marks);

    Display_Details(a);
    return 0;
}