/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: ep14  
 ***********************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char l1, l2, ch, name[21];
    FILE *foo;
    FILE *bar;

    puts("Enter some info below.");
	printf("File name: ");
    scanf(" %s", name);

    foo = fopen(name, "r");
    if(foo == NULL) return puts("File not Found!");

    printf("Character to put in: ");
    scanf(" %c", &l1);
    printf("Character to be replaced: ");
    scanf(" %c", &l2);

    bar = fopen("teste.txt", "w");
    
    while((ch = fgetc(foo)) != EOF)
    {
        if(ch == l2)
        {
            ch = l1;
            fputc(ch, bar);
        }
        else
            fputc(ch, bar);
    }
   
    fclose(foo);
    fclose(bar);	
    
    puts("All done! Check a file named \"teste.txt\"");        
	return 0;
}
	

