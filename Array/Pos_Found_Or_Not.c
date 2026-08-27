#include <stdio.h>

int main()
{
    int n, found = 0;

    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int x;
    scanf("%d", &x);

    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            found = 1;
            printf("Found");
            break;
        }
    }

    if(found == 0)
        printf("Not found");

    return 0;
}