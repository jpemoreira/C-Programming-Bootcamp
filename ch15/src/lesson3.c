#include <stdio.h>
#include <stdlib.h>

int main()
{
	char myChar;
	
	printf("Enter a character: \n");
	scanf("%c", &myChar);
	
	if(myChar >= 48 && myChar <= 57){
		printf("The character is a number. \n");
	} else if(myChar >= 65 && myChar <= 90){
		printf("The character is a capital letter. \n");
	} else if(myChar >= 97 && myChar <= 122){
		printf("The character is a lowercase letter. \n");
	} else{
		printf("The character is a symbol. \n");
	}
	
	return 0;
}