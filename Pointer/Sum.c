#include<stdio.h>

int main()
{
    int a, b;
    int *p = &a, *q = &b;

    scanf("%d %d", &a, &b);
    int sum = 0;
    sum = *p + *q;
    printf("%d",sum);

    return 0;
}