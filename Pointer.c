#include<stdio.h>
int main()
{
    int *p;
    int num = 20;
    p = &num;
    printf("value of num : %d\n",num);
    printf("address of num : %d\n",&num);
    printf("Address of p : %d\n",p);
    printf("value of p by num : %d\n",*p);
    printf("value of p by num : %d %d %d\n",*p, (*p+1), (*p+2));
    printf("value of p by num add : %d %d %d\n",p, (p+1), (p+2));
    return 0;
}