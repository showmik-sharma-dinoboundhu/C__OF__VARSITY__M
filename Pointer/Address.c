#include<stdio.h>

int main()
{
    int a = 10;
    int *p = &a;

    printf("Value = %d\n", *p);
    printf("Address = %p", p);

    return 0;
}