#include <stdio.h>

int main()
{
    int n, large, secondLarge, small, secondSmall;

    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    large = secondLarge = a[0];
    small = secondSmall = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] > large)
        {
            secondLarge = large;
            large = a[i];
        }
        else if(a[i] > secondLarge && a[i] != large)
            secondLarge = a[i];

        if(a[i] < small)
        {
            secondSmall = small;
            small = a[i];
        }
        else if(a[i] < secondSmall && a[i] != small)
            secondSmall = a[i];
    }

    printf("Second Largest = %d\n", secondLarge);
    printf("Second Smallest = %d", secondSmall);

    return 0;
}