/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: ep10
 ***********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int die(void)
{	
	return rand() % 6 + 1;
}

int main(void)
{
	const int MAX = 1000;
	int num[MAX]; // stores the result of throwing the die
	int side[6] = {0, 0, 0, 0, 0, 0}; // counts how many times each side appears
	int i;

	srand(time(0));

	printf("Throwing the die:\n");
	for(i = 0; i < MAX; i++)
	{
		num[i] = die();
		//printf("%d", num[i]); // uncomment to see the numbers

		switch (num[i]) {
			case 1: side[0]++; break;
			case 2: side[1]++; break;
			case 3: side[2]++; break;
			case 4: side[3]++; break;
			case 5: side[4]++; break;
			case 6: side[5]++; break;
		}
	}
	
	printf("\nOcurrences:\n");
	for(i = 0; i < 6; i++)
	{
		printf("Number %d occurs %d times, ", i+1, side[i]);
		printf("which corresponds to %.2f%%\n", side[i] * (1.0/10.0));
	}
			
	return 0;
}
	

