#include <stdio.h>

int main()
{
	int operation;
	float temp;
	
	printf("Which operation do you want to suceed? \n");
	printf("1 - Convert Celsius (°C) to Fahrenheit (°F) \n");
	printf("2 - Convert Fahrenheit (°F) to Celsius (°C) \n");
	scanf("%d", &operation);
	
	if(operation == 1){
		printf("Inform the temperature in Celsius: \n");
		scanf("%f", &temp);
		
		printf("The equivalent of %1.f °C in Fahrenheit is %1.f °F. \n", temp, (temp * 1.8 + 32));
	} else{
		printf("Inform the temperature in Fahrenheit: \n");
		scanf("%f", &temp);
		
		printf("The equivalent of %1.f °F in Celsius is %1.f °C. \n", temp, (temp - 32) / 1.8);
	}
}