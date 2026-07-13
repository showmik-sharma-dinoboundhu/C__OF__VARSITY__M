#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n <= 100 && n >= 80) printf("A+");
    else if(n <= 79 && n >= 70) printf("A");
    else if(n <= 69 && n >= 60) printf("B");
    else if(n <= 59 && n >= 50) printf("C");
    else if(n <= 49 && n >= 40) printf("D");
    else printf("Fail");
    return 0;
}