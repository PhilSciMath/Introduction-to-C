/****************************************************************************************
 * Autor: Leandro Borges Ferreira
 * UFRGS's Card: 00182012 
 * LAB07
 * Platform: Linux
 *
 * Program Description: 
 * 	It should read 10 int numbers from input into an array, take the average, divide each
 * 	of them by their average and then output the new array.	
 ****************************************************************************************/                   


#include <stdio.h>
#define NUM 10

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
    	    	
	title();
				
	// variables
	int n[NUM], sum = 0, mean; 

	// getting input
	for(int i = 0; i < NUM; i++){
		printf("Enter the value for position %d:  ", i + 1);
		scanf("%d", &n[i]);
		sum += n[i];
	}

	// calculating the average
	mean = sum / NUM;

	// making the new vector
	for(int i = 0; i < NUM; i++){
		n[i] /= mean;
	}

	// output the result
	printf("---------------------------\n\n");
	printf("%sSUM: %s%d\n",PURPLE, YELLOW, sum);
	printf("%sAVERAGE: %s%d%s\n", PURPLE, YELLOW, mean, RESET);
	for(int i = 0; i < NUM; i++){
		printf("New number at position %d: %s%d%s\n", i + 1, RED, n[i], RESET);		
	}
	

	return 0;
}

void title(void){

	printf("%s/===========================================================\\\n", BLUE);
	printf("|                       %sLAB07: ARRAYS%s                       |\n", GREEN, BLUE);
	printf("\\===========================================================/%s\n\n", RESET);
}
