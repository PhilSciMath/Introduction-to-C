/****************************************************************************************
 * NAME: Leandro Borges Ferreira
 * UFRGS's Card: 00182012 
 * LAB09
 * Platform: Linux
 *
 * Program Description: 
 * 	This program creates and initializes a 3 by 3 matrix with random numbers on the
 * 	range [1 - 30] by line. Then it prints the matrix and sums all its elements.  	
 ****************************************************************************************/                   


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

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
	srand(time(NULL));

	int m[ROW][COL];
	int row, col;
	int sum = 0;

	// Initializing the matrix with random numbers
	for(row = 0; row < ROW; row++)
		for(col = 0; col < COL; col++)
			m[row][col] = rand() % 31;
	
	// Printing the matrix
	for(row = 0; row < ROW; row++){
		printf("|");
		for(col = 0; col < COL; col++){
			sum += m[row][col];
			printf("%4d ", m[row][col]);
		}
		printf(" |\n");
	}
	
	printf("\nSum of all elements: %s%d%s\n", YELLOW, sum, RESET);

	return 0;
}

void title(void){

	printf("%s/===========================================================\\\n", BLUE);
	printf("|                      %sLAB09: MATRIX%s                        |\n", GREEN, BLUE);
	printf("\\===========================================================/%s\n\n", RESET);
}
