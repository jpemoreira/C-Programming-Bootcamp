#include <stdio.h>
#include <stdlib.h>

int main()
{
	int grade	= 0;
	int result	= 0;
	int count	= 0;
	
	printf("---- Average Grade Calculator ---- \n");
	
	while(grade >= 0){
		printf("Inform your grade (-1 to exit): \n");
		scanf("%d", &grade);
		if(grade >= 0){
			result += grade;
			count++;
		}
	}
	
	if(count > 0){
		printf("Your average grade is %.1f. \n", (result / (float) count));
	}
	
	return 0;
}