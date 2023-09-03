#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of students (N): ");
    scanf("%d", &N);

    int marks[5];
    int sum = 0;

    printf("Enter the student mark \n", N);
    for (int i = 0; i < N; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    double average = (double)sum / N;

    printf("Average mark for %d students: %.2lf\n", N, average);

    return 0; // Exit with success
}

