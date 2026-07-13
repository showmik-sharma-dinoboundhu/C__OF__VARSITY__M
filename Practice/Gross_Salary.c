#include<stdio.h>
int main()
{
    float basic,hr,da,gross;
    scanf("%f",&basic);
    hr = basic * 0.20;
    da = basic * 0.10;
    gross = basic + hr + da;
    printf("Salary = %.2f",gross);
    return 0;
}