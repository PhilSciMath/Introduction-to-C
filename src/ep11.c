/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: ep11
 ***********************************************************/

#include <stdio.h>

int prime(int x);

int main(void)
{
	int i;
	
	puts("Prime Numbers, 1 - 1000: ");
	
	for(i = 0; i < 1000; i++)
	{
	    if(prime(i) == 1)
	        printf("%d ", i);
	}
	
	return 0;
}
	
int prime(int x)
{
    int n = 0; // count the divisors
    int i;
    
    for(i = 1; i <= x; i++)
        if(x % i == 0)
            n++;
    
    if(n == 2) // is prime
        return 1;
    else
        return 0;   
}

