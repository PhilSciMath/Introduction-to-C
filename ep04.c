/****************************************************************************************
 * Autor: Leandro Borges Ferreira
 * UFRGS's Card: 00182012 
 * EP04
 * Platform: Linux
 *
 * Program Description: 
 * 	It should output a menu, read a product ID, read how many unities of the of the 
 *	product the client wants, calculate output the total cost. 
*****************************************************************************************/                   


#include <stdio.h>

// macros for products and prices
#define ID1 "Small Soda"
#define P1 0.6
#define ID2 "Big Soda"
#define P2 0.8
#define ID3 "Orange Juice"
#define P3 1.
#define ID4 "Simple Cone"
#define P4 1.
#define ID5 "Simple Cone w/ Cover"
#define P5 1.2
#define ID6 "Double Cone"
#define P6 1.2
#define ID7 "Double Cone w/ Cover"
#define P7 1.4
#define ID8 "Sundae"
#define P8 1.5
#define ID9 "Banana Split"
#define P9 2.
#define ID10 "House Special"
#define P10 2.5

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
	char code = '#';	
	int quantity = 0;

	// getting input
	title();
	menu();
	printf("Enter a product code:  ");
	scanf("%s", &code);	
	printf("How many unities would you like? >>  ");
	scanf("%d", &quantity);

	// core + output
	switch(code){
		case 'A': 
			printf("You're buying %s%d %sunities of %s%s.\n", RED, quantity, RESET, CYAN, ID1);
			printf("%sTOTAL COST: %sU$ %.2f\n", PURPLE, RED, quantity * P1);
			break;
      		case 'B': 
			printf("You're buying %s%d %sunities of %s%s.\n", RED, quantity, RESET, CYAN, ID2);
			printf("%sTOTAL COST: %sU$ %.2f\n", PURPLE, RED, quantity * P2);
			break;
      		case 'C': 
			printf("You're buying %s%d %sunities of %s%s.\n", RED, quantity, RESET, CYAN, ID3);
			printf("%sTOTAL COST: %sU$ %.2f\n", PURPLE, RED, quantity * P3);
			break;
      		case 'D': 
			printf("You're buying %s%d %sunities of %s%s.\n", RED, quantity, RESET, CYAN, ID4);
			printf("%sTOTAL COST: %sU$ %.2f\n", PURPLE, RED, quantity * P4);
			break;
      		case 'E': 
			printf("You're buying %s%d %sunities of %s%s.\n", RED, quantity, RESET, CYAN, ID5);
			printf("%sTOTAL COST: %sU$ %.2f\n", PURPLE, RED, quantity * P5);
			break;
      		case 'F': 
			printf("You're buying %s%d %sunities of %s%s.\n", RED, quantity, RESET, CYAN, ID6);
			printf("%sTOTAL COST: %sU$ %.2f\n", PURPLE, RED, quantity * P6);
			break;
      		case 'G': 
			printf("You're buying %s%d %sunities of %s%s.\n", RED, quantity, RESET, CYAN, ID7);
			printf("%sTOTAL COST: %sU$ %.2f\n", PURPLE, RED, quantity * P7);
			break;
      		case 'H': 
			printf("You're buying %s%d %sunities of %s%s.\n", RED, quantity, RESET, CYAN, ID8);
			printf("%sTOTAL COST: %sU$ %.2f\n", PURPLE, RED, quantity * P8);
			break;
      		case 'I': 
			printf("You're buying %s%d %sunities of %s%s.\n", RED, quantity, RESET, CYAN, ID9);
			printf("%sTOTAL COST: %sU$ %.2f\n", PURPLE, RED, quantity * P9);
			break;
      		case 'J': 
			printf("You're buying %s%d %sunities of %s%s.\n", RED, quantity, RESET, CYAN, ID10);
			printf("%sTOTAL COST: %sU$ %.2f\n", PURPLE, RED, quantity * P10);
			break;
		default: printf("%sNot a valid product code!/n", RED); break;
	}
	

	return 0;
}

void title(void){

	printf("%s/===========================================================\\\n", BLUE);
	printf("|                %sEP04: ICE CREAM STORE%s                      |\n", GREEN, BLUE);
	printf("\\===========================================================/%s\n\n", RESET);
}

void menu(void){

	printf("------------------------------------------------------\n");
	printf("| ID  |              PRODUCT             |   PRICE   |\n");
	printf("|----------------------------------------------------|\n");
	printf("|  A  |  %-30s  |  R$ %.2f  |\n", ID1, P1);
	printf("|  B  |  %-30s  |  R$ %.2f  |\n", ID2, P2);
	printf("|  C  |  %-30s  |  R$ %.2f  |\n", ID3, P3);
	printf("|  D  |  %-30s  |  R$ %.2f  |\n", ID4, P4);
	printf("|  E  |  %-30s  |  R$ %.2f  |\n", ID5, P5);
	printf("|  F  |  %-30s  |  R$ %.2f  |\n", ID6, P6);
	printf("|  G  |  %-30s  |  R$ %.2f  |\n", ID7, P7);
	printf("|  H  |  %-30s  |  R$ %.2f  |\n", ID8, P8);
	printf("|  I  |  %-30s  |  R$ %.2f  |\n", ID9, P9);
	printf("|  J  |  %-30s  |  R$ %.2f  |\n", ID10, P10);
	printf("------------------------------------------------------\n");
}








