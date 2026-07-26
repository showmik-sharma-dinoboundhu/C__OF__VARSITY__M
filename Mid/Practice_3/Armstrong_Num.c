#include<stdio.h>
int main()
{
    int n,tmp,rem,sum = 0;
    scanf("%d",&n);
    tmp = n;
    while(tmp > 0)
    {
        rem = tmp % 10;
        sum = sum + tmp * tmp * tmp;
        tmp = tmp / 10;
    }
    if(sum == n)
    {
        printf("Armstrong Num");
    }
    else printf("Not Armstrong Num");
    return 0;
}