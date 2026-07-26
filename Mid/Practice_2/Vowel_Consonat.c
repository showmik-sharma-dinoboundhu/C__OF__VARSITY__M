#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    // if(ch == 'a','e','i','o','u' || ch == 'A','E','I','O','U') printf("vowel\n");
    if(ch == 'a') printf("Vowel\n");
    else if(ch == 'e') printf("vowel\n");
    else if(ch == 'i') printf("vowel\n");
    else if(ch == 'o') printf("vowel\n");
    else if(ch == 'u') printf("vowel\n");
    else if(ch == 'A') printf("vowel\n");
    else if(ch == 'E') printf("vowel\n");
    else if(ch == 'I') printf("vowel\n");
    else if(ch == 'O') printf("vowel\n");
    else if(ch == 'U') printf("vowel\n");
    else printf("Consonent");
    return 0;
}