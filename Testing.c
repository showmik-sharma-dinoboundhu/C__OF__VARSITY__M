#include<stdio.h>
#include<string.h>
int main()
{
    char strl[30], strl2[50];
    printf("String:");
    gets(strl);
    strcpy(strl2,strl);
    printf(strl2);
    strcpy(strl2, "HOw are You?");
    printf(strl2);
    return 0;
}