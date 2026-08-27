#include<stdio.h>
void call_by_reference(int *p)
{
    *p = 40;
}
int main()
{
    int a = 20;
    call_by_reference(&a);
    printf("%d\n", a);
    printf("%d", &a);
    return 0;
}