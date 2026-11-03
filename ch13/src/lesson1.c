#include <stdio.h>
#include <stdlib.h>

int main()
{
	char grade;
	
	printf("Enter your grade letter (A-F): \n");
	scanf("%c", &grade);
	
	switch(grade){
		case 'A':
			printf("Your answered percentage rate is 90-100%! \n");
			break;
		case 'B':
			printf("Your answered percentage rate is 80-89%! \n");
			break;
		case 'C':
			printf("Your answered percentage rate is 70-79%! \n");
			break;
		case 'D':
			printf("Your answered percentage rate is 60-69%! \n");
			break;
		case 'F':
			printf("Your answered percentage rate is bellow 60%! \n");
			break;
		default:
			printf("Invalid grade letter, please try again! \n");
	}
	
	return 0;
}