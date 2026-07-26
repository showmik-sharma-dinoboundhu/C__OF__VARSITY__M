#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a > b && a > b) printf("A Is The Largest One - %d",a);
    else if(b > a && b > c) printf("B Is The Largest One - %d",b);
    else printf("C Is The Largest One - %d",c);
    return 0;
}