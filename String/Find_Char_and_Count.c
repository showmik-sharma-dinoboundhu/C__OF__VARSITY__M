#include <stdio.h>

int main()
{
    char a[100], ch;
    int count = 0;

    scanf("%s", a);
    scanf(" %c", &ch);

    for(int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == ch)
            count++;
    }

    printf("%d", count);

    return 0;
}