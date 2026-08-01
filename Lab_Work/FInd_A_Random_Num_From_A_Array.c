#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    int found = 0;
    int m;
    scanf("%d",&m);
    
    for(int i=0;i<n;i++)
    {
        if(a[i] == m)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("YES!!");
    }
    else
    {
        printf("No!!");
    }
    
    return 0;
}