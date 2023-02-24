/****************************************************************************************
 * NAME: Leandro Borges Ferreira
 * UFRGS's Card: 00182012 
 * EP08
 * Platform: Linux
 *
 * Program Description: 
 * 	It reads a word (25 characters), then a string (500 characters), then searches for
 * 	that word in the string counting how many times the word appears.	
 ****************************************************************************************/                   


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 501
#define SIZE 26		// size of the word to search for

// functions
void title(void);
int find_word(char x[SIZE], char y[MAX]);

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
				
	puts("Enter the word you want to find: ");
	char word[SIZE];
	fgets(word, SIZE, stdin);	// fgets(), because compiler complains

	puts("Enter the text (max 500 characters): ");
	char text[MAX];
	fgets(text, MAX, stdin);

	printf("The word %s appears %d times in the text.\n", word, find_word(word, text));

	return 0;
}

void title(void){

	printf("%s/===========================================================\\\n", BLUE);
	printf("|                     %sEP08: WORD FINDER%s                     |\n", GREEN, BLUE);
	printf("\\===========================================================/%s\n\n", RESET);
}

int find_word(char x[SIZE], char y[MAX]){

	// This function tries to count how many times a word x appears in a text y
	int count = 0;
	int num = 0;

	for(int i = 0; i < strlen(y); i++){
		
	}

	return count;
}



