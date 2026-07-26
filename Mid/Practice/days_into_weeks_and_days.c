#include<stdio.h>
int main()
{
    int days,week,rem;
    scanf("%d",&days);

    week = days / 7;
    rem = days % 7;
    
    printf("Weeks = %d\nRemain_Days = %d\n",week,rem);
    return 0;
}