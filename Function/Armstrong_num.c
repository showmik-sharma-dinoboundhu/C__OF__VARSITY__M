#include<stdio.h>

void armstrong(int n)
{
    int temp = n, sum = 0, r;

    while(n > 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }

    if(sum == temp)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}

int main()
{
    int n;

    scanf("%d", &n);
    armstrong(n);

    return 0;
}