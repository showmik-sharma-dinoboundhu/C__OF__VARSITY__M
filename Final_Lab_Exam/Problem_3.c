#include<stdio.h>
int input(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    return a,n;
}

void output(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}


int mn_mx(int a[], int n)
{
    int max = a[0];
    int min = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    
    printf("%d ", max);
    printf("%d ", min);
    return a,n;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    input(a, n);
    output(a,n);
    mn_mx(a,n);
    return 0;
}