/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: lab03 
 ***********************************************************/

#include <stdio.h>

int main(void)
{

	int age[3] = {0, 0, 0};
	int big = 0;

	printf("Enter three ages to compare: ");

	for(int i=0; i<3; i++)
	{
		scanf("%d", &age[i]);
		if(age[i]>big)
			big = age[i];
	}	
	
	printf("Greater age: %d\n\n", big);

	return 0;
}
	

