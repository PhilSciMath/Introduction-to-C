/****************************************************************************************
 * Autor: Leandro Borges Ferreira
 * UFRGS's Card: 00182012 
 * LAB02
 * Platform: Linux
 *
 * Program Description: 
 * 	It should read two real numbers, calculate and show Area and Perimeter
 * 	with two decimal places.	
 ****************************************************************************************/                   


#include <stdio.h>

// functions
void title(void);

// color codes
char RESET[] = "\033[0m";  
char RED[] = "\033[0;31m";     
char GREEN[] = "\033[0;32m";   
char YELLOW[] = "\033[0;33m";  
char BLUE[] = "\033[0;34m";    
char PURPLE[] = "\033[0;35m";  
char CYAN[] = "\033[0;36m";  

int main(void){

	// input
	double x = 0.0, y = 0.0;
	
	title();
	
	printf("Enter a value to the base: ");
	scanf("%lf", &x);
	printf("Enter a value to the hight: ");
	scanf("%lf", &y);

	// output
	printf("%sAREA: %s%.2lf\n", GREEN, RED, x * y);
	printf("%sPERIMETER: %s%.2lf%s\n\n", GREEN, RED, 2 * (x + y), RESET);
		

	return 0;
}

void title(void){

	printf("%s/===========================================================\\\n", BLUE);
	printf("|               %s LAB02: AREA AND PERIMETER%s                  |\n", YELLOW, BLUE);
	printf("\\===========================================================/%s\n\n", RESET);
}
