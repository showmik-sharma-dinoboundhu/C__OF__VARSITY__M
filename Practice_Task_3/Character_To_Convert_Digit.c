#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z') printf("Uppercase");
    else if(ch >= 'a' && ch <= 'z') printf("Lowercase");

    else if(ch >= '0' && ch <= '9') printf("Number");
    else printf("Special Character");
    return 0;
}