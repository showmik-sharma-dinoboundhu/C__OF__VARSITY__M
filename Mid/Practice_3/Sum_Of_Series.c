#include<stdio.h>
int main()
{
    int sum = 0;
    for(int i=0;i<=50;i+=2)
    {
        sum += i;
        printf("I = %d = %d\n",i,sum);
    }
    printf("Total = %d",sum);
    return 0;
}