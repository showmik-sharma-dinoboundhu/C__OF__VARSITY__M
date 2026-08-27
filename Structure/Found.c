#include<stdio.h>
void search(int a[], int n, int x)
{
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == x)
        {
            flag = 1;
            break;;
        }
    }
    if(flag) printf("FOUND");
    else printf("Not Found");
}
int main()
{
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x; scanf("%d",&x);
    search(a,n,x);
    return 0;
}