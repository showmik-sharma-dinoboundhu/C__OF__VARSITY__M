#include<stdio.h>
int main()
{
    int mins,hr,rem;
    scanf("%d",&mins);
    hr = mins / 60;
    rem = mins % 60;
    printf("Hour = %d\nRemain_mins = %d\n",hr,rem);
    return 0;
}