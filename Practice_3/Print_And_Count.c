#include<stdio.h>
int main()
{
    int cnt = 0;
    for(int i=1;i<=50;i++)
    {
        printf("NUM = %d\n",i);
        cnt++;
    }
    printf("Total = %d",cnt);
    return 0;
}