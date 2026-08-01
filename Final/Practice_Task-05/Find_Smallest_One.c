#include <stdio.h>

int main() {
    int num[6];
    int smallest;

    printf("Enter six integer numbers:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &num[i]);
    }

    smallest = num[0];

    for (int i = 1; i < 6; i++) {
        if (num[i] < smallest) {
            smallest = num[i];
        }
    }

    printf("The smallest number is: %d\n", smallest);

    return 0;
}