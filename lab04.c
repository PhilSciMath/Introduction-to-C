/****************************************************************************************
 * Autor: Leandro Borges Ferreira
 * UFRGS's Card: 00182012 
 * LAB04
 * Platform: Linux
 *
 * Program Description: 
 * 	It should read one int value and use switch to print a name of a product and its
 * 	price. Number must be between 1 and 10.	
 ****************************************************************************************/                   


#include <stdio.h>

// macros for products and prices
#define ID1 "TV"
#define V1 1500.00
#define ID2 "Smartphone"
#define V2 1245.67
#define ID3 "Graphics Card"
#define V3 1689.99
#define ID4 "Keyboard"
#define V4 245.66
#define ID5 "Mouse"
#define V5 176.44
#define ID6 "Printing Paper"
#define V6 10.99
#define ID7 "Processor"
#define V7 2355.55
#define ID8 "RAM Memory"
#define V8 500.00
#define ID9 "First Spider Man Comics"
#define V9 2000000000.00
#define ID10 "NASA's PC"
#define V10 1000000.00

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
	int code = 0;	
	

	// getting input
	title();
	printf("Enter a product code: ");
	scanf("%d", &code);	


	// core + output
	switch(code){
		case 1: printf("\n%sPRODUCT: %s%s\n%sPRICE: %sU$ %.2f\n", BLUE, YELLOW, ID1, BLUE, YELLOW, V1); break;
		case 2: printf("\n%sPRODUCT: %s%s\n%sPRICE: %sU$ %.2f\n", BLUE, YELLOW, ID2, BLUE, YELLOW, V2); break;
		case 3: printf("\n%sPRODUCT: %s%s\n%sPRICE: %sU$ %.2f\n", BLUE, YELLOW, ID3, BLUE, YELLOW, V3); break;
		case 4: printf("\n%sPRODUCT: %s%s\n%sPRICE: %sU$ %.2f\n", BLUE, YELLOW, ID4, BLUE, YELLOW, V4); break;
		case 5: printf("\n%sPRODUCT: %s%s\n%sPRICE: %sU$ %.2f\n", BLUE, YELLOW, ID5, BLUE, YELLOW, V5); break;
		case 6: printf("\n%sPRODUCT: %s%s\n%sPRICE: %sU$ %.2f\n", BLUE, YELLOW, ID6, BLUE, YELLOW, V6); break;
		case 7: printf("\n%sPRODUCT: %s%s\n%sPRICE: %sU$ %.2f\n", BLUE, YELLOW, ID7, BLUE, YELLOW, V7); break;
		case 8: printf("\n%sPRODUCT: %s%s\n%sPRICE: %sU$ %.2f\n", BLUE, YELLOW, ID8, BLUE, YELLOW, V8); break;
		case 9: printf("\n%sPRODUCT: %s%s\n%sPRICE: %sU$ %.2f\n", BLUE, YELLOW, ID9, BLUE, YELLOW, V9); break;
		case 10: printf("\n%sPRODUCT: %s%s\n%sPRICE: %sU$ %.2f\n", BLUE, YELLOW, ID10, BLUE, YELLOW, V10); break;
		default: printf("\n%sInvalid Product Code!\n", RED); break;	
	}
	

	return 0;
}

void title(void){

	printf("%s/===========================================================\\\n", BLUE);
	printf("|               %sLAB04: PRODUCTS AND PRICES%s                  |\n", GREEN, BLUE);
	printf("\\===========================================================/%s\n\n", RESET);
}
