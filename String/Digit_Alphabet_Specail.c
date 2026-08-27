#include <stdio.h>

int main()
{
    char a[100];
    scanf("%s", a);
    
    int digit = 0, alphabet = 0, special = 0;

    for(int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] >= '0' && a[i] <= '9')
            digit++;
        else if((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
            alphabet++;
        else
            special++;
    }

    printf("Digits = %d\nAlphabets = %d\nSpecial Characters = %d", digit, alphabet, special);

    return 0;
}