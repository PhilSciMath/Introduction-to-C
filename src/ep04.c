/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: ep04
 ***********************************************************/

#include <stdio.h>
#include <stdbool.h>

const double pi = 3.14159265;

int main(void)
{
	int choice;
	double num;
	bool valid = false;

	while(!valid)
	{
		printf("Choose the operation [enter the number]\n\n");
		printf("[1] Calculate the Area.\n");
		printf("[2] Calculate the perimeter.\n");
		printf(">> ");

		scanf(" %d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter a real number: ");
				scanf(" %lf", &num);
				printf("Area: %.2lf\n\n", pi*(num*num));
				valid = true;
				break;
			case 2:
				printf("Enter a real number: ");
				scanf(" %lf", &num);
				printf("Perimeter: %.2lf\n\n", 2*pi*num);
				valid = true;
				break;
			default:
				printf("Invalid option!\n");
				printf("---------------\n\n");
				break;		
		}
	}

	return 0;
}
	

