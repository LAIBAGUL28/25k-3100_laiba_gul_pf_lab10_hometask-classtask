#include <stdio.h>
//pf lab 10 q3
int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, totalChars = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i;
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Count every character except '\0'
        totalChars++;

        // vowel
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') 
        {
            vowels++;
        }

        // digits 
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }

        // spaces
        else if (ch == ' ') {
            spaces++;
        }

        // consonants
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            consonants++;
        }
    }

    printf("\nTotal Characters: %d\n", totalChars);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);

    return 0;
}

