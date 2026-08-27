#include <stdio.h>

int main()
{
    int marks[10];
    int sum = 0;
    float average;

    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&marks[i]);
        sum = sum + marks[i];
    }

    average = sum / 10.0;

    printf("Average marks = %.2f\n", average);

    return 0;
}