#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z') printf("UpperCase");
    else if(ch >= 'a' && ch <= 'z') printf("LowerCase");
    else if(ch >= '0' && ch <= '9') printf("DIGIT");
    else printf("Specail Character");
    return 0;
}