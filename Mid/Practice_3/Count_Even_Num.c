#include<stdio.h>
int main()
{
    int cnt = 0;
    for(int i=20;i<=100;i++)
    {
        if(i % 2 == 0)
        {
            cnt++;
        }
    }
    printf("Total = %d",cnt);
    return 0;
}