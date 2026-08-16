#include<stdio.h>
struct Student
{
    char name[20];
    int roll_num ;
    double marks;
};

int main()
{
    int n;
    scanf("%d",&n);
    struct Student s[n];

    for(int i=0;i<n;i++)
    {
        scanf("%s %d %lf", s[i].name, &s[i].roll_num, &s[i].marks);
    }
    for(int i=0;i<n;i++)
    {
        printf("\nStudent \n",i+1);
        printf("%s \n",s[i].name);
        printf("%d \n",s[i].roll_num);
        printf("%.2lf \n",s[i].marks);
    }
    return 0;
}