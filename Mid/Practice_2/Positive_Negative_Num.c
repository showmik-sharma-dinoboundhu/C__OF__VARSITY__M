#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n < 0) printf("Negative Num");
    else if(n > 0) printf("Positve Num");
    else printf("Zero");
    return 0;
}