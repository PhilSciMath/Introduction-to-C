/****************************************************************************************
 * Autor: Leandro Borges Ferreira
 * UFRGS's Card: 00182012 
 * LAB06
 * Platform: Linux
 *
 * Program Description: 
 * 	It should read seven real numbers representing people's weights in a loop.
 * 	Then it should output the average, the greatest and the smallest weight.
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
	float sum = 0.0, x = 0.0;	
	float min = 1000.0, max = 0.0;
	
	title();
	
	// input
	for(int i = 0; i < 7; i++){
		printf("Enter the weight of person number %d: ", i+1);
		scanf("%f", &x);
		sum += x;
		if(x < min) min = x;
		if(x > max) max = x;
	}
	
	// output
	printf("\n%sAVERAGE WEIGHT:%s %.2f\n", PURPLE, CYAN, sum / 7);
	printf("%sMAXIMAL WEIGHT:%s %.2f\n", PURPLE, YELLOW, max);
	printf("%sMINIMAL WEIGHT:%s %.2f\n", PURPLE, GREEN, min);
	

	return 0;
}

void title(void){

	printf("%s/===========================================================\\\n", BLUE);
	printf("|                       %sLAB06: WEIGHTS%s                      |\n", GREEN, BLUE);
	printf("\\===========================================================/%s\n\n", RESET);
}
