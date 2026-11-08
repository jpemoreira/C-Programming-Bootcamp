#include <stdio.h>
#include <stdlib.h>

int main()
{
	int day;
	int month;
	int year;
	
	printf("Enter the day of month (1-31): \n");
	scanf("%d", &day);
	
	printf("Enter the month (1-12): \n");
	scanf("%d", &month);
	
	printf("Enter the year (1979-2099): \n");
	scanf("%d", &year);
	
	printf("Day: 0x%X \nMonth: 0x%X \nYear: 0x%X \n", day, month, year);
	
	return 0;
}