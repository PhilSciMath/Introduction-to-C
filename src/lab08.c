/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: lab08
 ***********************************************************/

#include <stdio.h>
const int MAX = 500;

int main(void)
{
 	char str[MAX];
 	int i;
 	int count = 0;
    
    /* NOTA:
     * A função gets() não é mais standard desde C11 ISO/IEC 9899:2011. O motivo
     * é que ela permite ocorrência de buffer overflow, inclusive o Morris Worm
     * foi criado usando gets() e um buffer overflow para se propagar de um PC
     * para outro. A solução é utilizar fgets(), pois esta demanda um parametro
     * int para limitar o comprimento da string. No meu PC o GCC 11.1.0 não
     * admite gets() -- talvez compiladores mais antigos aceitem -- então usei
     * fgets().
     */
    
    puts("Enter a text: ");
    fgets(str, sizeof(str), stdin);
    
    for(i = 0; i < MAX; i++)
    {
        if(str[i] == ' ')
            count++;
    }
    
    printf("Number of spaces: %d\n", count);   
 

	return 0;
}


