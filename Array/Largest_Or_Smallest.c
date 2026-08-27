#include <stdio.h>

int main()
{
    int a[10], small, large;

    for(int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    small = large = a[0];

    for(int i = 1; i < 10; i++)
    {
        if(a[i] < small)
            small = a[i];

        if(a[i] > large)
            large = a[i];
    }

    printf("Smallest = %d\nLargest = %d", small, large);

    return 0;
}