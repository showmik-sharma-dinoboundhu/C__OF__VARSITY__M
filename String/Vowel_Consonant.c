#include <stdio.h>

int main()
{
    char a[100];
    int vowel = 0, consonant = 0;

    scanf("%s", a);

    for(int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
            vowel++;
        else
            consonant++;
    }

    printf("Vowels = %d\nConsonants = %d", vowel, consonant);

    return 0;
}