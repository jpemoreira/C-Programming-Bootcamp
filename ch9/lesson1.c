#include <stdio.h>

int main()
{
	int salary1;
	int salary2;
	int costs;
	
	printf("Inform your monthly salary: \n");
	scanf("%d", &salary1);
	
	printf("\nYour partner salary: \n");
	scanf("%d", &salary2);
	
	printf("\nInform your monthly costs (food, gas, eletricity, etc): \n");
	scanf("%d", &costs);
	
	printf("Your monthly revenue is %d$, your expenses is %d$. \n", (salary1 + salary2), costs);
	printf("The balance of this month is %d$. \n", (salary1 + salary2 - costs));
	
	return 0;
}