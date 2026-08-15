#include<stdio.h>
void Find_Large(int m, int n, int o)
{
    if(m >= n && m >= o)
    {
        printf("m is the large one = %d", m);
    }
    else if(n >= m && n >= o)
    {
        printf("n is the large one = %d", n);
    }
    else
    {
        printf("o is the large one = %d", o);
    }
}
int main()
{
    int m,n,o;
    scanf("%d %d %d",&m,&n,&o);
    Find_Large(m,n,o);
    return 0;
}