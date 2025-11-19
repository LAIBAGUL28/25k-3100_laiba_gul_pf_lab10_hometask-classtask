#include <stdio.h>
#include <string.h>
//PF LAB QUESTION 5
int main() {
    int n;
    
    printf("Enter number of students: ");
    scanf("%d", &n);

    char names[n][50];   // to store names
    int marks[n];        // to store marks

    int i;
    for (i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter marks of %s: ", names[i]);
        scanf("%d", &marks[i]);
    }

    // Find highest scorer
    int maxIndex = 0;
    for (i = 1; i < n; i++) {
        if (marks[i] > marks[maxIndex]) {
            maxIndex = i;
        }
    }

    // Print result
    printf("\n--- Highest Scorer ---\n");
    printf("Name : %s\n", names[maxIndex]);
    printf("Marks: %d\n", marks[maxIndex]);

    return 0;
}

