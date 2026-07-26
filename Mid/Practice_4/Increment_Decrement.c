#include<stdio.h>
int main()
{
    int x = 25, y = 30;
    y = x++;
    x = --y;
    printf("%d\n",x++);
    printf("%d\n",++y);
    printf("%d\n",x+y);
    return 0;
}