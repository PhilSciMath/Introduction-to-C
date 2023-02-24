/*
 *	Leandro B. F.
 *	lab11
 */

#include <stdio.h>

double power(double x, int y);

int main(void){
	
	int exp;
	double base;

	printf("Enter a value for the base: ");
	scanf("%lf", &base);
	printf("Enter a positive number for the exponent: ");
	scanf("%d", &exp);

	printf("%.1lf to the power of %d results: %.2lf\n\n", base, exp, power(base, exp));
	
	return 0;
}

double power(double x, int y){
	double num = 1.0L;
	while(y != 0){
	       num *= x;
	       y--;
	}
	return num;	
}
