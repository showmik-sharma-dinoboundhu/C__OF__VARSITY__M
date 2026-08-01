#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",&s);

    int Lct = 0, Uct = 0;

    for(int i=0; s[i] != '\0'; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            Uct++;
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
        {
            Lct++;
        }
    }
    printf("%d\n", Uct);
    printf("%d\n", Lct);
    return 0;
}
