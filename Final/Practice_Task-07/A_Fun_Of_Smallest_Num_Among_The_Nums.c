#include<stdio.h>
void Largest(int n)
{
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int min = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i] < min)
            min = a[i];
    }
    if(min > 0)
        {
            printf("Smallest - %d", min);
        }
}

int main()
{
    int n;
    scanf("%d",&n);
    Largest(n);
    return 0;
}