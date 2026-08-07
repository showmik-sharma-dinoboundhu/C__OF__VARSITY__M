#include<stdio.h>
void add(int a, int b)
{
    int sum = a + b;
    printf("%d\n",sum);
}
void sub(int a, int b)
{
    int sub = a - b;
    printf("%d\n",sub);
}
void mul(int a, int b)
{
    int mul = a * b;
    printf("%d\n",mul);
}
void div(float a, float b)
{
    float div = a / b;
    printf("%.2f",div);
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    add(n,m);
    sub(n,m);
    mul(n,m);
    div(n,m);
    return 0;
}