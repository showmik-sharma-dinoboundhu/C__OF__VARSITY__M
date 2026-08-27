#include<stdio.h>

void input(int a[])
{
    for(int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
}

void display(int a[])
{
    for(int i = 0; i < 10; i++)
        printf("%d ", a[i]);
}

void average(int a[])
{
    int sum = 0;

    for(int i = 0; i < 10; i++)
        sum = sum + a[i];

    printf("\nAverage = %.2f", sum / 10.0);
}

int main()
{
    int a[10];

    input(a);
    display(a);
    average(a);

    return 0;
}