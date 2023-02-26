/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: lab10
 ***********************************************************/

#include <stdio.h>

float read(void)
{	
	float x;

	do{
		scanf("%f", &x);

		if(x >= 0 && x <= 10)			
			return x;
		else
		 	printf("Error! Allowed range is [0.0 - 10.0]\nTry Again >>  ");
	}while(1);
}

int main(void)
{
	const int MAX = 10;
	float score[MAX];
	int i;
	float sum = 0.0f;
	float big;
	float small;

	for(i = 0; i < MAX; i++)
	{
		printf("Enter the score of student %d: ", i+1);
		score[i] = read();
		sum += score[i];
	}
	
	big = score[0];
	small = score[0];

	for(i = 0; i < MAX; i++)
	{
		if(score[i] > big)
			big = score[i];
		if(score[i] < small)
			small = score[i];
	}

	printf("Average: %.2f\n", sum / MAX);
	printf("Highest score: %.2f\n", big);
	printf("Lowest score: %.2f\n", small);	
	
	
	return 0;
}
	

