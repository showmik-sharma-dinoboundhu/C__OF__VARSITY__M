#include<stdio.h>
int main()
{
    int years;
    scanf("%d",&years);
    if((years % 400 == 0) || (years % 4 == 0 && years % 100 != 0))
    {
        printf("Leaf Year");
    }
    else
    {
        printf("Not Leaf Year");
    }
    return 0;
}

