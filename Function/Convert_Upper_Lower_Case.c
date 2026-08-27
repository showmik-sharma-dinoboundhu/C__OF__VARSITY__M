#include<stdio.h>

void uppercase(char a[])
{
    for(int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] >= 'a' && a[i] <= 'z')
            a[i] = a[i] - 32;
    }
}

void lowercase(char a[])
{
    for(int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
            a[i] = a[i] + 32;
    }
}

int main()
{
    char a[100];

    scanf("%s", a);

    uppercase(a);
    printf("%s\n", a);

    lowercase(a);
    printf("%s", a);

    return 0;
}