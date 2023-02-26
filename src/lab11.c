/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: lab11
 ***********************************************************/

#include <stdio.h>

void matrix(int m, int n, char c);

int main(void)
{
	
	int m;
	int n;
	char c;
	
	puts("Enter the number of lines: ");
	scanf("%d", &m);
	puts("Enter the number of columns: ");
	scanf("%d", &n);
	puts("Enter the character to print: ");
	scanf(" %c", &c);
	
	puts("------------------------------");
	matrix(m, n, c);
		
	return 0;
}
	
void matrix(int m, int n, char c)
{
    char A[m][n];
    
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            A[i][j] = c;  
            
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)        
            printf("%c ", A[i][j]);
        
        printf("\n");
    }              
            
    return;
}
