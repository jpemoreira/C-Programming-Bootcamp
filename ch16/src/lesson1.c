#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	int pow;
	int result = 1;
	
	printf("Enter a number: \n");
	scanf("%d", &num);
	
	printf("Enter how many times you want to pow the number: \n");
	scanf("%d", &pow);
	
	for(int i = 1; i <= pow; i++){
		result *= num;
	}
	
	printf("The exponential value of %d at the power of %d is %d \n", num, pow, result);
	
	return 0;
}