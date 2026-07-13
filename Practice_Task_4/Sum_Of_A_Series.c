#include<stdio.h>
int main()
{
    int sum = 0;
    for(int i=5;i<=150;i+=5)
    {
        sum += i;
    }
    printf("%d",sum);
    return 0;
}