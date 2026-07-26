#include<stdio.h>
int main()
{
    double b,h;    //b = Base, h = Height
    scanf("%lf %lf",&b,&h);

    double Area = 0.5 * b * h;

    printf("Triange Area = %.2lf",Area);
    return 0;
}