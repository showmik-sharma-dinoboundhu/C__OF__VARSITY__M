#include <stdio.h>

int main() {
    int arr[6];
    int search, found = 0;

    printf("Enter 6 numbers:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &search);

    for (int i = 0; i < 6; i++) {
        if (arr[i] == search) {
            printf("Number found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Number not found in the array.\n");
    }

    return 0;
}