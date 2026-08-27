#include<stdio.h>

void input(int a[], int n)
{
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

void display(int a[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

void min_max(int a[], int n)
{
    int min = a[0], max = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] < min)
            min = a[i];

        if(a[i] > max)
            max = a[i];
    }

    printf("\nMaximum = %d\nMinimum = %d", max, min);
}

int main()
{
    int n;

    scanf("%d", &n);
    int a[n];

    input(a, n);
    display(a, n);
    min_max(a, n);

    return 0;
}