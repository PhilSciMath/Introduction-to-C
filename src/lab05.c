/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: lab05
 ***********************************************************/

#include <stdio.h>

int main(void)
{
	int num = 1;
	int big = 0;	
			
	printf("Enter an integer number: ");

	while(num != 0)
	{
		scanf(" %d", &num);
		
		if(num < 0)
			printf("Invalid! Try again.\n\n");		
		else if(num >= 1)
			if(num > big) big = num;		
	}

	printf("Biggest Number: %d.\n\n", big);

	return 0;
}
	

