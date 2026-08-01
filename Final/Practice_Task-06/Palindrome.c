#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",&a);
    int st = strlen(a);
    int i = 0, j = st - 1;

    while(i < j)
    {
        if(a[i] != a[j])
        {
            printf("NOT PALINDROME !!");
            return 0;
        }  
        i++;
        j--;
    }
    printf("YES PALINDROME!!"); 
    return 0;
}

