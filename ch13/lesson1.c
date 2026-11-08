#include <stdio.h>
#include <stdlib.h>

int main()
{
	int grade;
	
	printf("Inform your semester grade (0-100): \n");
	scanf("%d", &grade);
	
	if(grade >= 80){
		printf("You've done great! \n");
	} else if(grade >= 60){
		printf("You passed it... \n");
	} else{
		printf("Failed, please try again! \n");
	}
	
	return 0;
}