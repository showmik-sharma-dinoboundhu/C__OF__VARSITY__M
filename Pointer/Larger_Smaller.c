#include<stdio.h>

int main()
{
    int a, b;
    int *p = &a, *q = &b;

    scanf("%d %d", &a, &b);

    if(*p > *q)
        printf("Larger = %d\nSmaller = %d", *p, *q);
    else
        printf("Larger = %d\nSmaller = %d", *q, *p);

    return 0;
}