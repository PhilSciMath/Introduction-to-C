/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: ep05
 ***********************************************************/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int num;
	bool pass = true;
		
	printf("Guess the number: \n");

	while(pass)
	{
		scanf(" %d", &num);	

		switch(num)
		{
			case 1: 
				printf("No! This number is too small.\n");
				break;
			case 2: 
				printf("You need someting bigger than this.\n");
				break;
			case 3:
				printf("It's still too small!\n");
				break;
			case 4:
				printf("You can do better, try a bigger one.\n");
				break;
			case 5:
				printf("Almost there. It should be bigger.\n");
				break;
			case 6: 
				printf("\n******************************\n");
				printf("  YOU WON! The number is 6!!\n");
				printf("******************************\n\n");
				pass = false;
				break;
			case 7:
				printf("That was close, you need to go down a bit.\n");
				break;
			case 8:
				printf("Not quite there. Try a smaller one.\n");
				break;
			case 9: 
				printf("No! The number is smaller than this.\n");
				break;
			case 10:
				printf("Wrong! This is too high.\n");
				break;
			default:
				printf("------------------\n");
				printf("  Invalid Range!\n");
				printf("------------------\n\n");
				break;
		}
	}

	return 0;
}
	

