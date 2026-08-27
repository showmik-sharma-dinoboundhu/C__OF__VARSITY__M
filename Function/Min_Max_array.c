#include<stdio.h>

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

    printf("Minimum = %d\n", min);
    printf("Maximum = %d", max);
}

int main()
{
    int n;

    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min_max(a, n);

    return 0;
}