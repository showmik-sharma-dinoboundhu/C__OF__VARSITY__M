#include<stdio.h>
int main()
{
    int n,flag = 0;
    scanf("%d",&n);
    if(n <= 1)
    {
        flag = 1;
    }
    for(int i=2;i<n;i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Not Prime Num");
    }
    else printf("Prime Num");
    return 0;
}