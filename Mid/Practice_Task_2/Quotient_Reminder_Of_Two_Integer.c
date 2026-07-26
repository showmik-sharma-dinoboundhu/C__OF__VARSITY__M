#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    if(b==0) printf("Division Can't Possible");
    else
    {
    int div = a/b;
    int rem = a%b;
    printf("Quotient = %d\nReminder = %d",div,rem);
    }
    return 0;
}