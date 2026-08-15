#include<stdio.h>
void Largest(int n, int a[])
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int max = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    if(max > 0)
        {
            printf("Largest - %d", max);
        }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    Largest(n,a);
    return 0;
}