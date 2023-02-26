/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: ep06
 ***********************************************************/

#include <stdio.h>

int main(void)
{
    int n, i;
    int div = 0;
    
	printf("Enter a positive integer number: ");
	
	do
	{
	    scanf(" %d", &n);
	    if(n <= 0)
	        printf("Invalid Input. Try Again: ");	    
	}
	while(n <= 0);
    
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            div++;
    }
    
    if(div == 2)
        printf("Number %d is Prime.\n", n);
    else
        printf("Not Prime since %d has %d divisors.\n", n, div);

	return 0;
}
	

