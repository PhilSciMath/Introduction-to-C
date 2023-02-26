/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: lab07
 ***********************************************************/

#include <stdio.h>
const int MAX = 15;

int main(void)
{
    float grade[MAX];
    int i;
    float sum = 0.0;
    float avg;

    printf("Enter the student's grades.\n\n");

    for(i = 0; i < MAX; i++)
    {
        printf("Student %d grade is: ", i+1);
        scanf(" %f", &grade[i]);
        sum += grade[i];
    }

    avg = sum / (float)MAX;
    printf("\nAVERAGE: %.2f\n\n", avg);
    printf("BELLOW AVERAGE:\n");

    for(i = 0; i < MAX; i++)
    {
        if(grade[i] < avg)
            printf("Student %d scored only %.2f\n", i+1, grade[i]);
    }

	return 0;
}


