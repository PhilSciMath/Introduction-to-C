/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: ep03 
 ***********************************************************/

#include <stdio.h>
const int MAX = 3; 

int main(void)
{
	
	float height[MAX];
	float big = 0.0F;
	int i;
	int less = 0, more = 0;
	float sum = 0.0F, avg;

	for(i=0; i<MAX; i++) height[i] = 0.0F;
	printf("Enter three heights: ");
	for(i=0; i<MAX; i++)
	{
		scanf("%f", &height[i]);
		sum += height[i];
		if(height[i] > big) big = height[i];

		if(height[i] < 1.50F)
			less++;
		else more++;
	}

	avg = sum/(float)MAX;
	printf("Number of people shorter than 1.50m: %d\n", less);
	printf("Number of people 1.50m tall or higher: %d\n", more);
	printf("Average height: %.2f\n", avg);
	
	if(avg>1.50) printf("The average height is MORE than 1.50m.\n\n");
	else if(avg == 1.50) printf("The average height is EXACTLY 1.50m.\n\n");
	else printf("The average height is LESS than 1.50m.\n\n");

	return 0;
}
	

