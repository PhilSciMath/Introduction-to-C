/*
 *	Leandro 00182012
 *	lab12
 */

#include <stdio.h>
#define MAX 15


void print(int array[MAX], int x, int y){
	int i;

	for(i = 0; i < y; i++)
		if(array[i] > x) 
			printf("%d is greater than %d\n", array[i], x);
		
}

int main(void){
	int v[MAX];
	int cut, i;
	
	printf("Enter a value to compare: ");
	scanf("%d", &cut);
	printf("Enter the values for the array:\n");
	for(i = 0; i < MAX; i++){
		scanf("%d", &v[i]);
	}
	
	print(v, cut, MAX);

	return 0;
}


