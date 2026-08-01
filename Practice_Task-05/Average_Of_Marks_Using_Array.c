#include <stdio.h>

int main() {
    int marks[10];
    int sum = 0;
    float average;

    printf("Enter marks of 10 students:\n");

    for (int i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / 10.0;

    printf("\nAverage marks = %.2f\n", average);

    return 0;
}