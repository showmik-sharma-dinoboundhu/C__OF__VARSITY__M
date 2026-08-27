#include<stdio.h>

void prime(int n)
{
    int flag = 1;

    if(n < 2)
        flag = 0;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Prime");
    else
        printf("Not Prime");
}

int main()
{
    int n;
    scanf("%d", &n);
    prime(n);
    return 0;
}