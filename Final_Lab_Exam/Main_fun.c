#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&an);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int mx = a[0], mn = a[0];
        if(a[i] > mx)
            mx = a[i];
        if(a[i] < mn)
            mn = a[i];
    }
    return 0;
}