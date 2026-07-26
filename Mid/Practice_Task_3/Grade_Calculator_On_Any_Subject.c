#include<stdio.h>

int main()
{
    int marks;

    scanf("%d", &marks);

    switch(marks / 10)
    {
        case 10:
        case 9:
        case 8:
            printf("Grade - A");
            break;

        case 7:
            printf("Grade - B");
            break;

        case 6:
            printf("Grade - C");
            break;

        case 5:
            printf("Grade - D");
            break;

        case 4:
            printf("Grade - E");
            break;

        default:
            printf("Grade - F");
    }

    return 0;
}