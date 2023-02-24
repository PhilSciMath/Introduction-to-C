/****************************************************************************************
 * Autor: Leandro Borges Ferreira
 * UFRGS's Card: 00182012 
 * EP02
 * Platform: Linux
 *
 * Program Description: 
 * 	It should read a real number (Celsius Temperature), calculate and output
 * 	the equivalent Kelvin and Fahrenheit. 	
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
	float ce = 0.0, fa = 0.0, ke = 0.0; 
	
	title();
	
	printf("Enter a Celsius Temperature: ");
	scanf("%f", &ce);

	// calculations
	fa = ce * 9 / 5 + 32;
	ke = ce + 273.15;

	// output
	printf("%sCELSIUS\t\t%sFAHRENHEIT\t%sKELVIN\n", CYAN, YELLOW, PURPLE);
	printf("%s%.3f\t\t%s%.3f\t\t%s%.3f%s\n\n", CYAN, ce, YELLOW, fa, PURPLE, ke, RESET);
	
	return 0;
}

void title(void){

	printf("%s/===========================================================\\\n", BLUE);
	printf("|              %s EP02: TEMPERATURE CONVERTER%s                 |\n",GREEN, BLUE);
	printf("\\===========================================================/%s\n\n", RESET);
}
