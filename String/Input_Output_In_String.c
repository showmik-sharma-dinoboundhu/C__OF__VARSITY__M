#include <stdio.h>

int main()
{
    char name[100];

    gets(name);

    printf("%s", name);

    return 0;
}