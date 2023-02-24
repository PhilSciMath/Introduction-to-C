/****************************************************************************************
 * Autor: Leandro Borges Ferreira
 * UFRGS's Card: 00182012 
 * LAB03
 * Platform: Linux
 *
 * Program Description: 
 * 	It should read three integers (ages in years) and show which one is the biggest.	
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
	int a = 0, b = 0, c = 0;
	
	title();
	printf("Type three ages:\n_________\r");
	scanf("%d%d%d", &a, &b, &c);


	// core + output
	printf("\n%sAGES TYPED: %s%d %d %d%s\n", YELLOW, CYAN, a, b , c, RESET);
	if(a > b && a > c) printf("%sGREATER AGE: %s%d%s\n",YELLOW, RED, a, RESET);
	else if(b > c) printf("%sGREATER AGE: %s%d%s\n", YELLOW, RED, b, RESET);
	else printf("%sGREATER AGE: %s%d%s\n", YELLOW, RED, c, RESET);


	return 0;
}

void title(void){

	printf("%s/===========================================================\\\n", BLUE);
	printf("|                    %sLAB03: OLDEST PERSON%s                   |\n", GREEN, BLUE);
	printf("\\===========================================================/%s\n\n", RESET);
}
