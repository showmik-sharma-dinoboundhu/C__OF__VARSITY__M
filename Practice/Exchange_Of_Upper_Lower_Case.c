#include<stdio.h>
int main()
{
    char ch,chh;
    scanf("%c %c",&ch,&chh);
    ch = ch - 32;
    chh = chh + 32;
    printf("Capital = %d\nSmall = %d",ch,chh);
    return 0;
}