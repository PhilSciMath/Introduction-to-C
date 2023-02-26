/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: ep09
 ***********************************************************/

#include <stdio.h>
#include <stdbool.h>
const int N = 3;

// Assumindo que os dados de entrada sejam int no intervalo [1-30]
int checkval(void);

int main(void)
{
	int matrix[N][N];
	int i, j;
	int sum = 0;
	
	for(i = 0; i < N; i++)
	{
	    for(j = 0; j < N; j++)
	    {
	        printf("Enter element %d, line %d: ", j+1, i+1);
	        matrix[i][j] = checkval();
	        sum += matrix[i][j];
	    }
	}
	
	printf("------------------------------\n\n");
	for(i = 0; i < N; i++)
	{
	    printf("| ");
	    for(j = 0; j < N; j++)
	    {
	        printf("%2d ", matrix[i][j]);
	    }
	    printf("|\n");
	}
	
	printf("\nSum of the elements: %d\n\n", sum);	
	
	return 0;
}

int checkval(void)    
{
    bool pass = false;
    int x;
    
    while(!pass)
    {
        scanf(" %d", &x);
        if(x > 0 && x < 31)
        {            
            pass = true;
            return x;
        }
        else // "You shall not pass!"
            printf("Invalid! Try Again: ");
    }        
}
	

