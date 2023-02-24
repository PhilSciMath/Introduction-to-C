/****************************************************************************************
 * Autor: Leandro Borges Ferreira
 * UFRGS's Card: 00182012 
 * EP05
 * Platform: Linux
 *
 * Program Description: 
 * 	A guess the number game, in the range [1,10], using while and switch.
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
    	    	
	// variables
	int num;
		
	title();
	
	do{
		printf("Guess the number: ");
		scanf("%d", &num);
		
		switch(num){
			case 0: printf("Sorry, you missed it. The number is a lot higher.\n\n"); break;
			case 1: printf("Sorry, you missed it. The number is a lot higher.\n\n"); break;
			case 2: printf("Sorry, you missed it. The number is a lot higher.\n\n"); break;
			case 3: printf("Sorry, you missed it. The number is a bit higher.\n\n"); break;
			case 4: printf("Sorry, you missed it. The number is a bit higher.\n\n"); break;
			case 5: printf("Almost there!\n\n"); break;
			case 6: printf("%sCongratulations! You did it!%s\n\n", YELLOW, RESET); break;
			case 7: printf("Almost there.\n\n"); break;
			case 8: printf("Sorry, you missed it. The number is a bit lower.\n\n"); break;
			case 9: printf("Sorry, you missed it. The number is a bit lower.\n\n"); break;	
			case 10: printf("Sorry, you missed it. The number is lower than this one.\n\n"); break;
			default: printf("%sNot in the range!%s\n\n", RED, RESET); break;
		}
				
	}while(num != 6);
	
	return 0;
}

void title(void){

	printf("%s/===========================================================\\\n", BLUE);
	printf("|                  %sEP05: GUESS THE NUMBER%s                   |\n", GREEN, BLUE);
	printf("\\===========================================================/%s\n\n", RESET);
}
