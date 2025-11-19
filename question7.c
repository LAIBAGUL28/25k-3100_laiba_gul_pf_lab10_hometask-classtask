#include <stdio.h>
#include <string.h>
//pf lab question 7
int main() {
    char names[4][20] = {"Alice", "Bob", "Charlie", "Diana"};

    char courses[20][20] = {
        "Math", "Physics", "English",        // Alice (0,1,2)
        "Biology", "Chemistry",              // Bob   (3,4)
        "Math", "Physics", "Chemistry", "Computer",   // Charlie (5,6,7,8)
        "History", "English", "Art"          // Diana (9,10,11)
    };

    int courseCount[4] = {3, 2, 4, 3};

    int startIndex[4] = {0, 3, 5, 9};

    printf("\n--- Student Course List ---\n");
		int i;
    for ( i = 0; i < 4; i++) {
        printf("\n%s is registered for: ", names[i]);

        int start = startIndex[i];
        int j;
        for (j = 0; j < courseCount[i]; j++) {
            printf("%s  ", courses[start + j]);
        }
    }
    printf("\n");

    char searchCourse[20];
    printf("\nEnter a course name to search (Example: Physics): ");
    scanf("%s", searchCourse);

    printf("\nStudents taking '%s':\n", searchCourse);

    int found = 0;

    for (i = 0; i < 4; i++) {
        int start = startIndex[i];
        int j;
        for (j = 0; j < courseCount[i]; j++) {
            if (strcmp(searchCourse, courses[start + j]) == 0) {
                printf("- %s\n", names[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("No students are taking this course.\n");
    }

    printf("\n--- Overloaded Students (More than 3 courses) ---\n");

    int overloaded = 0;
    for (i = 0; i < 4; i++) {
        if (courseCount[i] > 3) {
            printf("- %s (%d courses)\n", names[i], courseCount[i]);
            overloaded = 1;
        }
    }

    if (!overloaded) {
        printf("No overloaded students.\n");
    }

    return 0;
}

