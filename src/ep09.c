/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: ep09
 ***********************************************************/

#include <stdio.h>
const int n = 2;
const int m = 3;

int main(void)
{
    int i, j, k;
    
	float A[n][m];
	float B[m][n];
	float C[n][n];	
	float sum = .0;
	
	// Filling up matrix A
	printf("MATRIX A:\n");
	for(i = 0; i < n; i++)
	{
	    for(j = 0; j < m; j++)
	    {
	        printf("Line %d, element %d: ", i+1, j+1);
	        scanf("%f", &A[i][j]);
	    }
	}
	
	// Filling up B
	printf("\n\nMATRIX B:\n");
	for(i = 0; i < m; i++)
	{
	    for(j = 0; j < n; j++)
	    {
	        printf("Line %d, element %d: ", i+1, j+1);
	        scanf("%f", &B[i][j]);
	    }
	}	    
		
	// Computing C: isso sim deu trabalho				
	for(i = 0, k = 1; i < n; i++, k--)
	{
	    for(j = 0; j < m; j++)	    
	        sum += A[i][j] * B[j][i];     
	    
	    C[i][i] = sum;  
	    sum = .0;  

		for(j = 0; j < m; j++)
	    	sum += A[k][j] * B[j][i];
	    
	    C[k][i] = sum;
	    sum = .0;		    
	}
		
	printf("----------------------------\n");
    // Printing A
	printf("MATRIX A:\n\n");
	for(i = 0; i < n; i++)
	{
		putchar('\t');
		for(j = 0; j < m; j++)	    
	        printf("%6.2f\t", A[i][j]);	        
	    
	    putchar('\n');
	}
	
	// Printing B
	printf("\n\nMATRIX B:\n\n");
	for(i = 0; i < m; i++)
	{
		putchar('\t');
	    for(j = 0; j < n; j++)	    
	        printf("%6.2f\t", B[i][j]);
	    
	    putchar('\n');
	}
	
	// Printing C
	printf("\n\nMATRIX A x B: \n\n");
	for(i = 0; i < n; i++)
	{
		putchar('\t');
	    for(j = 0; j < n; j++)	    
	        printf("%6.2f\t", C[i][j]);            
	    
	    putchar('\n');
	} 	
	
	return 0;
}
	

