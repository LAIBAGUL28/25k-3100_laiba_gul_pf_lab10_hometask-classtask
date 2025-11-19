#include<stdio.h>
#include<string.h>
//PF LAB QUESTION 4
int main(){
	char str[50];
	int i;
	printf("Enter a message:\n");
	fgets(str, 50, stdin);
	str[strcspn(str, "\n")] = '\0';
	
	int len = strlen(str);
	printf("Encrypted: ");
	for(i=0; i<len; i++){
		if(str[i] != ' '){
			printf("%c", str[i]+3);
		}
		else{
			printf(" ");
		}
	}
	printf("\n");
	printf("Decrypted: %s", str);
	
	return 0;
}
