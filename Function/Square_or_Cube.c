#include<stdio.h>

void square(int n)
{
    int sq = n * n;
    printf("%d\n", sq);
}

void cube(int n)
{
    int cb = n * n * n;
    printf("%d", cb);
}

int main()
{
    int n;

    scanf("%d", &n);

    square(n);
    cube(n);

    return 0;
}