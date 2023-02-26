/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: lab13  
 ***********************************************************/

#include <stdio.h>
#include <string.h>

#define NUMBER_OF_CARS 5
#define NAME_SIZE 51

typedef struct {
   char name[NAME_SIZE];
   int hp;  // horsepower
   float price;
   } car;

int main(void)
{
   car x[NUMBER_OF_CARS];
   float mprice; // maximum price
   int i;   
   
	for(i = 0; i < NUMBER_OF_CARS; i++)
	{
	    printf("Name of car #%d: ", i+1);	        
	    fgets(x[i].name, NAME_SIZE, stdin);
	    
	    // removing the annoying '\n' that fgets() reads
	    x[i].name[strlen(x[i].name) - 1] = '\0';    	    
	    
	    printf("Enter %s's horsepower: ", x[i].name);
	    scanf("%d", &x[i].hp);
	    
	    printf("Type in the price of a %s: ", x[i].name);
	    scanf("%f", &x[i].price);	        
        
        // Depois de horas brigando com o buffer e tentando eliminar as 
        // sobras por todos os meios possiveis, incluindo fflush(stdin), 
        // que nao funciona nesse caso, decidi simplesmente ler o caractere
        // sobejante e voila! Salvo por um getchar(). Comente e veja a catastrofe. 
        getchar();
        
        puts(" ");
	}
	
	printf("Please inform the maximum price: ");
	scanf("%f", &mprice);
	puts(" ");
	
	for(i = 0; i < NUMBER_OF_CARS; i++)
	{
	    if(x[i].price <= mprice)        
	    {
	        printf("name: %s\n", x[i].name);
	        printf("horsepower: %d\n", x[i].hp);
	        printf("price: %.2f\n", x[i].price);
	        printf("\n");
	    }
	}	
	
	
	return 0;
}



