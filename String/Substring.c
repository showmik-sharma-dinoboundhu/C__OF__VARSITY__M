#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];

    scanf("%s", a);
    scanf("%s", b);

    if(strstr(a, b) != NULL)
        printf("Substring");
    else
        printf("Not Substring");

    return 0;
}