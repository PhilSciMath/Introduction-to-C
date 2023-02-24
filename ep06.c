/****************************************************************************************
 * Autor: Leandro Borges Ferreira
 * UFRGS's Card: 00182012 
 * EP06
 * Platform: Linux
 *
 * Program Description: 
 * 	It should read an int number N, not negative. Then calculate N+1 approximations of
 * 	Euler's number using the ginven formula. 
 ****************************************************************************************/                   


#include <stdio.h>
#include <stdlib.h>

// functions
void title(void);
void menu(void);

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
	int N, fac = 1;
	float sum = 1.0;
	char key = '#';
	
	// header with title
	title();	

	
	// main loop menu
	do{
		menu();
		printf("\n>> ");
		key = getchar();


		switch(key){
			case 'q': 
			break;
			case 'c': 
				system("clear");
				printf("Define the value of N: ");
				scanf("%d", &N);
										
				if(N >= 0){
					printf("For K = %d we have e ~= %.10f\n", 0, 1.0);
					for(int i = 1; i <= N; i++){
						fac *= i;
						sum += (float)1/fac;
						printf("For K = %d we have e ~= %.10f\n", i, sum);		
					}
					printf("\n------------------------------------\n\n");		
				}
				else 
				printf("N should be 0 or greater. Try again.\n\n");
			break;
			default: printf("Not a valid choice.\n"); 
			break;
		}
		
		// More than 3 hours trying to figure out how to fix the excess of stuff
		// in the buffer that was messing up my main loop, this litte funtion, 
		// exactly at this point, saved my code!! 
		getchar(); 

	}while(key != 'q');

		
	return 0;	
}

void menu(void){
	printf("%s------------------\n", CYAN);
	printf("|   CHOOSE ONE   |\n");
	printf("|----------------|\n");
	printf("| q | exit       |\n");
	printf("|---|------------|\n");
	printf("| c | calculate  |\n");
	printf("------------------%s\n", RESET);
}

void title(void){

	printf("%s/===========================================================\\\n", BLUE);
	printf("|                         %sEP06: EULER%s                       |\n", GREEN, BLUE);
	printf("\\===========================================================/%s\n\n", RESET);
}

