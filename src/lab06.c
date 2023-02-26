/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: lab06
 ***********************************************************/

#include <stdio.h>
const int N = 10;

int main(void)
{
    int age[N];
    int i;
    int sum = 0;
    int big = -1;
    int small = 1000;
    
    printf("Inform the ages: ");
    
    for(i = 0; i < N; i++)
    {
        scanf(" %d", &age[i]);
        sum += age[i];
        if(age[i] > big)
            big = age[i];
        if(age[i] < small)
            small = age[i];
    }
    
    printf("Average: %.2f\n", (float)sum / N);
    printf("Oldest Person: %d\n", big);
    printf("Youngest Person: %d\n", small);

	return 0;
}
	

