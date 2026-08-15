#include <stdio.h>
int EO(int n)
{
    if(n % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return;
}
int main()
{
    int n;
    scanf("%d",&n);
    EO(n);
    return 0;
}