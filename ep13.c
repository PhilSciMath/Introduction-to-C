/*
*	Leandro 00182012
*	ep13.c
*/

#include <stdio.h>
#include <string.h>
#define MAX 10		// must be 10, number of companies
#define EMP 2		// must be 2, number of employees
#define LEN 100		// must be 100, length for the arrays of type char
#define NUM 75		// line length

typedef struct{
	char name[LEN];
	float income;
}person;

typedef struct{
	char street[LEN];
	int number;
}address;

typedef struct{
	char company_name[LEN];
	address local;
	person employee[EMP];
}company;

void header(void);
void line(int);
void line2(int);
void ler_frase(char* frase, int tamanho_maximo);	// do professor
address read_address(void);
person read_person(void);

int main(void){
	company organisation[MAX];	
	int k, j, count = 0;
	char string[LEN];	
	
	for(k = 0; k < MAX; k++){
		line(4);
		printf(" Enter the data for the company %d\n", k+1);
		printf("Name: ");
		ler_frase(string, LEN);
		
		if(strcmp(string, "-") == 0) break;
		else {
			count++;
			strcpy(organisation[k].company_name, string);			
			organisation[k].local = read_address();
			for(j = 0; j < EMP; j++){
				line(2);
				printf(" Enter the data for employee %d\n", j+1);
				organisation[k].employee[j] = read_person();
			}			
		}
		printf("\n");		
	}
	
	// output:
	if(count != 0) header();
	for(k = 0; k < count; k++){
		printf("%s\t%s, %d", organisation[k].company_name, 
			organisation[k].local.street, 
			organisation[k].local.number);
			for(j = 0; j < EMP; j++){
				printf("\t\t");
				printf("%s\t\t%.2f", organisation[k].employee[j].name,
					organisation[k].employee[j].income);
				printf("\n\t\t\t");				
			}
		printf("\n");
		if(k < count-1) line2(NUM);
	}
	line(NUM);
	
	return 0;
}

void line(int x){
	for(int i = 0; i < x; i++) printf("=");
}

void line2(int x){	
	for(int i = 0; i < x; i++) printf("-");
	printf("\n");
}

void ler_frase(char* frase, int tamanho_maximo)
{
    int i;
    do
    {
        fgets(frase, tamanho_maximo, stdin);
        for (i = 0; i < tamanho_maximo && frase[i] != '\0'; i++)
        {
            if ( frase[i] == '\n' )
            {
                frase[i] = '\0';
                break;
            }
        }
    } while ( i == 0 );
}

address read_address(void){
	address ads;	
	
	printf("Street: ");
	ler_frase(ads.street, LEN);	
	printf("Number: ");
	scanf("%d", &ads.number);
	
	return ads;
}

person read_person(void){
	person p;
	
	printf("Name: ");
	ler_frase(p.name, LEN);
	printf("Income: ");
	scanf("%f", &p.income);
	
	return p;
}

void header(void){
	printf("\n");
	line(NUM);
	printf("\nCompany\t\tAddress\t\t\tEmployee\t\tIncome\n");
	line(NUM);
	printf("\n");
}

