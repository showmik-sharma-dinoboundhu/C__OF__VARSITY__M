#include<stdio.h>

void area(float b, float h)
{
    float a = 0.5 * b * h;
    printf("%.2f", a);
}

int main()
{
    float b, h;

    scanf("%f %f", &b, &h);

    area(b, h);

    return 0;
}