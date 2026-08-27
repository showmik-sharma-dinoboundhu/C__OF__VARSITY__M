#include<stdio.h>
void call_by_value(int p)
{
    p = 40;
}
int main()
{
    int a = 20;
    call_by_value(a);
    printf("%d", a);
    return 0;
}