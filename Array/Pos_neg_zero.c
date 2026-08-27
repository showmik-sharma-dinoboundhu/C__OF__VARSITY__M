#include <stdio.h>

int main()
{
    int n, positive = 0, negative = 0, zero = 0;

    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
            positive++;
        else if(a[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("%d %d %d", positive, negative, zero);

    return 0;
}