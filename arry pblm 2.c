#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of students (N): ");
    scanf("%d", &N);



    int marks[N]; // Dynamically allocate an array based on N
    char grades[N]; // To store the grades

    printf("Enter the marks of %d students:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &marks[i]);

        // Calculate the grade based on the provided grade chart
        if (marks[i] >= 90 && marks[i] <= 100) {
            grades[i] = 'A';
        } else if (marks[i] >= 80 && marks[i] <= 89) {
            grades[i] = 'B';
        } else if (marks[i] >= 70 && marks[i] <= 79) {
            grades[i] = 'C';
        } else if (marks[i] >= 60 && marks[i] <= 69) {
            grades[i] = 'D';
        } else {
            grades[i] = 'F';
        }
    }

    printf("\nGrade for each student:\n");
    for (int i = 0; i < N; i++) {
        printf(" %d %d %c\n", i + 1, marks[i], grades[i]);
    }

    return 0; // Exit with success
}

