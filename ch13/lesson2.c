#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
	
	printf("Inform a number: \n");
	scanf("%d", &number);
	
	if((number % 2) == 0){
		printf("Number is odd! \n");
	} else{
		printf("Number is even! \n");
	}
	
	return 0;
}