/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: lab04
 ***********************************************************/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char x = 0;
	bool valid = false;
	
	while(!valid){
		printf("Enter a letter: ");
		scanf(" %c", &x);

		if(x > 64 && x < 91 || x > 96 && x < 123)
		{
			valid = true;

			switch(x)
			{
				case 'a': printf("Volwel!\n\n"); break;
				case 'e': printf("Volwel!\n\n"); break;
				case 'i': printf("Volwel!\n\n"); break;
				case 'o': printf("Volwel!\n\n"); break;
				case 'u': printf("Volwel!\n\n"); break;
				case 'A': printf("Volwel!\n\n"); break;
				case 'E': printf("Volwel!\n\n"); break;
				case 'I': printf("Volwel!\n\n"); break;
				case 'O': printf("Volwel!\n\n"); break;
				case 'U': printf("Volwel!\n\n"); break;
				default: printf("Consonant!\n\n"); break;
			}
		}
		else
		{
			printf("Invalid character!\n");
			printf("------------------\n\n");
		} 
	}

	return 0;
}
	

