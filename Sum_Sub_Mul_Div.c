#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int sum = a+b;
    int sub = a-b;
    int mul = a*b;

    printf("Summation - %d\nSubtract - %d\nMultiplication - %d\n",sum,sub,mul);

    if(b == 0) printf("Division can't possible");
    else 
    {
        int div = a/b;
        printf("Divison - %d",div);
    }
    return 0;
}