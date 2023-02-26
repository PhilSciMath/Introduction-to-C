/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: ep13  
 ***********************************************************/

#include <stdio.h>

#define NAME_SIZE 21
#define STYLE_SIZE 11
#define NUMBER_OF_BOOKS 10

// Parte a - definir a estrutura livro:
typedef struct {
    char title[NAME_SIZE];
    char author[NAME_SIZE];
    char style[STYLE_SIZE];
    int code;
    float price;
} book;

// Parte b - funcao que le os dados e retorne a estrutura
book readBook(void)
{
    book x;

    printf("Enter the book's title: ");
    fgets(x.title, NAME_SIZE, stdin);
   
    printf("Enter the author's name: ");
    fgets(x.author, NAME_SIZE, stdin);
   
    printf("Enter the style of the book: ");
    fgets(x.style, STYLE_SIZE, stdin);
   
    printf("Enter the book's code: ");
    scanf("%d", &x.code);
   
    printf("Enter the book's price: ");
    scanf("%f", &x.price);
    
    getchar(); // Absolutely needed!
    puts(" ");
    
    return x;
}

// Parte c - funcao que recebe struct e imprime na tela
void printBook(book x)
{
    printf("TITLE: %s", x.title);  
    printf("AUTHOR: %s", x.author);
    printf("STYLE: %s", x.style);
    printf("CODE: %d\n", x.code);
    printf("PRICE: R$ %.2f\n", x.price); 
}

int main(void)
{
    // Parte d - fazer vetor tipo book, tamanho 10, ler e imprimir com as funcoes acima
	book b[NUMBER_OF_BOOKS];	
	int i;	
	
	for(i = 0; i < NUMBER_OF_BOOKS; i++)
	    b[i] = readBook();
	
	for(i = 0; i < NUMBER_OF_BOOKS; i++)
	{
	    printBook(b[i]);	
	    puts(" ");
	}
	
	return 0;
}
	

