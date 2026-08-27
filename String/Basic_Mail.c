#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int at = 0, dot = 0;

    scanf("%s", a);

    for(int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == '@')
            at++;
        if(a[i] == '.')
            dot++;
    }

    if(at == 1 && dot >= 1)
        printf("Valid Email");
    else
        printf("Invalid Email");

    return 0;
}