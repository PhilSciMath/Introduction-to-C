/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: lab12
 ***********************************************************/

#include <stdio.h>

const int MAX = 501;
int charfinder(char *, int, char);

int main(void)
{
    char text[MAX];
    char c;
    int i, n;
    
    
    puts(">>> Start typing: ");    
    fgets(text, MAX, stdin);
    
    puts("Choose a character to search: ");
    scanf(" %c", &c);
    
    n = charfinder(text, MAX, c);
    printf("\n%c appears %d times in the text.", c, n);
	
	return 0;
}

int charfinder(char v[MAX], int x, char ch)
{
    int i;
    int count = 0;
    
    for(i = 0; i < x; i++)
        if(v[i] == ch)
            count++;
    
    return count;
}


