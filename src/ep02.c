/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: ep02 
 ***********************************************************/

#include <stdio.h>

int main(void)
{

	float x;

	printf("Enter the temperature in Celsius: ");
	scanf("%f", &x);
	printf("\nCelsius\tKelvin\tFahrenheit\n" 
		"%.2f\t%.2f\t%.2f\n\n", x, x*9/5+32, x+273.15);
	
	return 0;
}
	

