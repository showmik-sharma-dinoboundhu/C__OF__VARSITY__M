#include<stdio.h>

void perfect(int n)
{
    int sum = 0;

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum = sum + i;
    }

    if(sum == n)
        printf("Perfect");
    else
        printf("Not Perfect");
}

int main()
{
    int n;

    scanf("%d", &n);

    perfect(n);

    return 0;
}