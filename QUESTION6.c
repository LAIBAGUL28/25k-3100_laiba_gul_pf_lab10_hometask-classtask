#include <stdio.h>

int main() {
    char names[5][50];
    int marks[5];
    int i;

    printf("Enter the names and marks of 5 students:\n");

    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter marks of %s: ", names[i]);
        scanf("%d", &marks[i]);
    }

    // 1. Display all students in a neat table
    printf("\n------------------------------------\n");
    printf("  Student Name\t\tMarks\n");
    printf("------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("  %d\t \t  %d\n", names[i], marks[i]);
    }
    printf("------------------------------------\n");

    // 2. Find the top student
    int maxIndex = 0;
    for (i = 1; i < 5; i++) {
        if (marks[i] > marks[maxIndex]) {
            maxIndex = i;
        }
    }

    // 3. Calculate class average
    float sum = 0;
    for (i = 0; i < 5; i++) {
        sum += marks[i];
    }
    float average = sum / 5;

    // Output results
    printf("\nTop Student: %s with %d marks\n", names[maxIndex], marks[maxIndex]);
    printf("Class Average: %.2f\n", average);

    return 0;
}

