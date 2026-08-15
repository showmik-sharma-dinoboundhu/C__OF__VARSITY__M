#include<stdio.h>
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("a = %d, b = %d",*a,*b);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    return 0;
}