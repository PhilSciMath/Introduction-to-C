/****************************************************************************************
 * Autor: Leandro Borges Ferreira
 * UFRGS's Card: 00182012 
 * EP03
 * Platform: Linux
 *
 * Program Description: 
 * 	It should read four real numbers representing four radioactive measurements,
 * 	then calculate the average and classify the level of danger in five classes.
 * 		
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
    	    	
	// variables, using double because e-notation is supposed to be big 
	double w = 0.0, x = 0.0, y = 0.0, z = 0.0;
	double mean = 0.0;
	
	// getting input
	title();
	printf("Enter the four measurements:\n______________________________\r");
	scanf("%lf%lf%lf%lf", &w, &x, &y, &z);
	
	// calculations
	mean = (w + x + y + z) / 4.0;
	
	// output
	if(mean < 1e-7){
		printf("\n%sAVERAGE: %s%.10lf Sv.\n", CYAN, GREEN, mean);
		printf("%sThe object is less radioactive than a banana.%s\n", GREEN, RESET);
	}
	else if(mean > 1e-7 && mean < 1e-5){
		printf("\n%sAVERAGE: %s%.10lf Sv.\n", CYAN, GREEN, mean);
		printf("%sRadiation level doesn't pose any harm.%s\n", GREEN, RESET);
	}
	else if(mean > 1e-5 && mean < 1e-3){
		printf("\n%sAVERAGE: %s%.10lf Sv.\n", CYAN, YELLOW, mean);
		printf("%sRadiation level above the normal daily dosage.%s\n", YELLOW, RESET);
	}
	else if(mean > 1e-3 && mean < 50){
		printf("\n%sAVERAGE: %s%.10lf Sv.\n", CYAN, RED, mean);
		printf("%sRadiation level above the recommended maximal annual dosage.%s\n", RED, RESET);
	}
	else {
		printf("\n%sAVERAGE: %s%.10lf Sv.\n", CYAN, RED, mean);
		printf("%sThe object is a nuclear reactor.%s\n", RED, RESET);
	}

	return 0;
}

void title(void){

	printf("%s/===========================================================\\\n", BLUE);
	printf("|                  %sEP03: RADIOACTIVE DANGER%s                 |\n", GREEN, BLUE);
	printf("\\===========================================================/%s\n\n", RESET);
}
