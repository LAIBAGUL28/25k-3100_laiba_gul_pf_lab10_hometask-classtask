#include <stdio.h>
#include <string.h>

// pf lab 10 question 2
 const int MAX_EMAIL_LENGTH = 100;

void extract_domain(const char *email, char *domain_output) {
    const char *at_sign = strchr(email, '@');
    
    if (at_sign != NULL) {
        strcpy(domain_output, at_sign + 1);
    } else {
        strcpy(domain_output, "Invalid email");
    }
}

int main() {
    char email[MAX_EMAIL_LENGTH];
    char domain[MAX_EMAIL_LENGTH];

    printf("--- Email Domain Extraction ---\n");
    printf("Enter an email address: ");
    
    if (fgets(email, MAX_EMAIL_LENGTH, stdin) == NULL) {
        return 1; 
    }

    size_t len = strlen(email);
    if (len > 0 && email[len - 1] == '\n') {
        email[len - 1] = '\0';
    }

    extract_domain(email, domain);

    printf("Email: %s -> Domain: %s\n", email, domain);

    return 0;
}
