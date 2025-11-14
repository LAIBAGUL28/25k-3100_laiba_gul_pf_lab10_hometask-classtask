#include<stdio.h>
#include<string.h>
int main()
{
	char word[4][10] = {"apple","grapes","kiwi","orange"};

	int i;
	strcpy(word[1],"mango");
	
	for(i=0; i<4;i++)
	{
		puts(word[i]);
	 int len = strlen(word[i]);
	
	 
	 printf("%d\n",len);
	 int j;
	 for(j=0; word[i][j]!='\0';j++)
	 printf(" %c\n",word[i][j]);
	}
}
