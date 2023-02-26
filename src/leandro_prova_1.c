/*
*	Aluno: Leandro Borges Ferreira
*	Cartão UFRGS: 00182012
*	Introdução à Programação - Prova 1
*/

#include <stdio.h>
#include <stdbool.h>

float check_input(void);
void bar(void) { puts("------------------------------------"); }

int main(void)
{
	int i, j;	

	// part a: creating strings for students's names
	char name1[30];
	char name2[30];
	char name3[30];
	

	// part b: getting names from user's input
	puts("Enter the names for each student: ");
	
	fgets(name1, sizeof(name1), stdin);	
	fgets(name2, sizeof(name2), stdin);	
	fgets(name3, sizeof(name3), stdin);
	

	// part c: creating a matrix to store the scores of the students
	float scores[3][4];

	
	// part d:	initializing the matrix from user's input
	bar();
	for (i = 0; i < 3; i++)
	{		
		for (j = 0; j < 4; j++)
		{
			printf("Enter student %d, score %d: ", i+1, j+1);
			scores[i][j] = check_input();
		}			
	}


	// part e: computing the average for each student
	float avg[3];
	float sum;
	for (i = 0; i < 3; i++)
	{
		sum = 0;
		for (j = 0; j < 4; j++)
		{
			sum += scores[i][j];
		}
		avg[i] = sum / 4;
	}


	// part f: printing the matrix and the averages
	bar();
	for (i = 0; i < 3; i++)
	{
		printf("Scores: ");
		for (j = 0; j < 4; j++)
		{
			printf("%5.2f\t", scores[i][j]);
		}
		printf("Average: %5.2f\n", avg[i]);
	}


	// part g: counting how many passed the exam
	bar();
	int count = 0;
	for (i = 0; i < 3; i++)
		if (avg[i] >= 6.0f)
			count++;	
	printf("%d students passed the exam.\n", count);


	// part h: figuring out which student got the highest score
	bar();
	float y = 0.0f;
	int best;
	for (i = 0; i < 3; i++)
		if (avg[i] >= y)
		{
			y = avg[i];
			best = i;
		}
	
	switch (best)
	{
		case 0: printf("%s has got the highest score.\n", name1);
			break;
		case 1: printf("%s has got the highest score.\n", name2);
			break;
		default: printf("%s has got the highest score.\n", name3);
			break;
	}	


	return 0;
}

// used to control the range of valid scores [1-10]
float check_input(void)
{
	bool pass = false;
	float x;

	do{

		scanf_s("%f", &x);

		if(x > 0 && x < 11)
		{
			pass = true;
			return x;
		}
		else
			printf("INVALID! Allowed range: [1-10]. \nTry again: ");
	} while (!pass);
}