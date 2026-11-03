#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	int num2;
	int op;
	
	printf("Enter the first number: \n");
	scanf("%d", &num1);
	
	printf("Enter the second number: \n");
	scanf("%d", &num2);
	
	printf("Which operation do you want to proceed? \n");
	printf("1 => Sum \n");
	printf("2 => Subtract \n");
	printf("3 => Multiply \n");
	printf("4 => Divide \n");
	
	scanf("%d", &op);
	switch(op){
		case 1:
			printf("The result number is %d. \n", (num1 + num2));
			break;
		case 2:
			printf("The result number is %d. \n", (num1 - num2));
			break;
		case 3:
			printf("The result number is %d. \n", (num1 * num2));
			break;
		case 4:
			if(num2 != 0){
				printf("The result number is %d. \n", (num1 / num2));
			} else{
				printf("Division by zero, aborting... \n");
			}
			break;
		default:
			printf("Invalid operation, please try again! \n");
	}
	
	return 0;
}