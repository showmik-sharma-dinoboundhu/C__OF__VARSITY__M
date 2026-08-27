#include <stdio.h>
int main()
{
    char a[100], ch;
    int pos = -1;

    scanf("%s", a);
    scanf(" %c", &ch);

    for(int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == ch)
        {
            pos = i;
            break;
        }
    }

    printf("%d", pos);
    return 0;
}