#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of elements (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Invalid number of elements. Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    int numbers[N];

    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nOdd numbers in the array:\n");
    for (int i = 0; i < N; i++) {
        if (numbers[i] % 2 != 0) {
            printf("%d\n", numbers[i]);
        }
    }

    return 0; // Exit with success
}





