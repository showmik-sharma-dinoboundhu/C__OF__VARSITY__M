#include <stdio.h>

int main()
{
    char a[100];
    int upper = 0, lower = 0, digit = 0, special = 0;

    scanf("%s", a);

    for(int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
            upper = 1;
        else if(a[i] >= 'a' && a[i] <= 'z')
            lower = 1;
        else if(a[i] >= '0' && a[i] <= '9')
            digit = 1;
        else
            special = 1;
    }

    if(upper && lower && digit && special)
        printf("Valid Password");
    else
        printf("Invalid Password");

    return 0;
}