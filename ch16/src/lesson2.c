#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numOfAsterisks;
	int i = 0;
	
	printf("How many asterisks would you want to see? \n");
	scanf("%d", &numOfAsterisks);
	
	while(i < numOfAsterisks){
		printf("*");
		i++;
	}
	
	printf("\nProgram finished, %d characters printed out.\n", numOfAsterisks);
	
	return 0;
}