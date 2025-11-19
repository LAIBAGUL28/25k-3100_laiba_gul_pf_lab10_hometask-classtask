#include <stdio.h>
#include <string.h>
//pf lab 10 question 1
int main() {
    char password[100];
    int length, hasUppercase=0, hasintegar=0, hasSpecial=0;
    
    printf("Enter your password: ");
    scanf("%s", password);  

    length = strlen(password);


    if(length < 8) {
        printf("sorry!! the password should be of 8 character.\n");
        return 0;
    }
	int i;
    for(i=0; i<length; i++) {
        char ch = password[i];

        // Check uppercase 
        if(ch >= 'A' && ch <= 'Z') {
            hasUppercase = 1;
        }
        // Check integar
        else if(ch >= '0' && ch <= '9') {
            hasintegar = 1;
        }
        // Check special characters
        else if(ch=='!' || ch=='@' || ch=='#' || ch=='$' || ch=='%') {
            hasSpecial = 1;
        }
    }

    if(hasUppercase && hasintegar && hasSpecial) {
        printf("password saved successfully:) \n");
    } else {
        printf("Weak password:( . Password must contain:\n");
        if(!hasUppercase) printf("- At least one uppercase letter\n");
        if(!hasintegar) printf("- At least one digit\n");
        if(!hasSpecial) printf("- At least one special character (!,@,#,$,%%)\n");
    }

    return 0;
}
 
