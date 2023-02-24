/*
 *	Leandro 00182012
 *	LAB13
 */

#include <stdio.h>
#define MAX 3

void line(void){
	for(int i = 0; i < 50; i++)
		printf("=");
}

typedef struct{	
	char name[50];
    char symbol[4];
	int atomic_number;
	float atomic_weight;
} element;

int main(void){
	
	int i;
	element e[MAX];
	
	for(i = 0; i < MAX; i++){
		printf("Enter element %d's data\n", i+1);
		printf("Name: ");
		scanf(" %s", e[i].name);
		printf("Symbol: ");
		scanf(" %s", e[i].symbol);
		printf("Atomic Number: ");
		scanf("%d", &e[i].atomic_number);
		printf("Atomic Weight: ");
		scanf("%f", &e[i].atomic_weight);
		printf("\n\n");
	}
	
	printf("\t\tElements\n");
	line();
	printf("\nName\tSymbol\tAtomic Number\tAtomic Weight\n");
	line();
	
	for(i = 0; i < MAX; i++){
		printf("\n%s\t%s\t%d\t\t%.2f", e[i].name, e[i].symbol, e[i].atomic_number, e[i].atomic_weight);
	}


	return 0;
}


