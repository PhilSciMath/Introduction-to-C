/****************************************************************************************
 * NAME: Leandro Borges Ferreira
 * UFRGS's Card: 00182012 
 * LAB08
 * Platform: Linux
 *
 * Program Description: 
 * 	It reads a string with 500 characters and checks how many upercase and lowercase
 * 	vowels there are inside the string.	
 ****************************************************************************************/                   


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 501

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
				
	printf("Write some text (max %d characters): ", MAX - 1);
	char text[MAX];

	// fgets() because gets() is dangerous and the compiler complains
	fgets(text, MAX, stdin);	

	// counting vowels
	int counter = 0;
	for(int i = 0; i < strlen(text); i++){
		switch(text[i]){
			case 'a': counter ++; break;
			case 'e': counter ++; break;
			case 'i': counter ++; break;
			case 'o': counter ++; break;
			case 'u': counter ++; break;
			case 'A': counter ++; break;
			case 'E': counter ++; break;
			case 'I': counter ++; break;
			case 'O': counter ++; break;
			case 'U': counter ++; break;
			default: break;
		}
	}

	printf("Number of vowels: %s%d%s\n", YELLOW, counter, RESET);

	return 0;
}

void title(void){

	printf("%s/===========================================================\\\n", BLUE);
	printf("|                  %sLAB08: VOLWEL COUNTER%s                    |\n", GREEN, BLUE);
	printf("\\===========================================================/%s\n\n", RESET);
}
