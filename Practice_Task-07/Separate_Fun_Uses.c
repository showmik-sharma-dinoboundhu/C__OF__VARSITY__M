#include<stdio.h>
void arr(int n, int a[])
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void displayArr(int n, int a[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void minimum(int n, int a[])
{
    int min = a[0];
    for(int i=0;i<n;i++)
    {
        if(min> a[i])
            min = a[i];
    }
    if(min > 0)
        printf("Smallest - %d",min);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    arr(n,a);
    displayArr(n,a);
    minimum(n,a);
    return 0;
}