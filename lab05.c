/****************************************************************************************
 * Autor: Leandro Borges Ferreira
 * UFRGS's Card: 00182012 
 * LAB05
 * Platform: Linux
 *
 * Program Description: 
 * 	It should read and sum an arbitrary number of masses. Stops when 0 is typed.
 * 	Prints the sum by the end.	
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
    	    	
	// variables
	int count = 1;
	float sum = 0.0, x = 1.0;
	
	// getting input	
	title();
	
	do{
		printf("Enter the amount of element %d in kg: ", count);
		scanf("%f", &x);
		sum += x;
		count++;		
	}while(x != 0);
	
	// output
	printf("%sTOTAL MASS: %s%.2f kg\n", PURPLE, YELLOW, sum);

	return 0;
}

void title(void){

	printf("%s/===========================================================\\\n", BLUE);
	printf("|                    %sLAB05: MASS SUMECT%s                     |\n", GREEN, BLUE);
	printf("\\===========================================================/%s\n\n", RESET);
}
