/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: lab14 
 ***********************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *foo;
	char text[1000+1];
	char filename[30+1];
	int line = 0;

	printf("Enter the file name: ");
	fgets(filename, 30+1, stdin);

	// Now because fgets() adds a '\n' just before '\0'
	if(filename[strlen(filename)-1] == '\n') 
		filename[strlen(filename)-1] = '\0';

	foo = fopen(filename, "r");
	if(foo == NULL)
	{
		puts("Error. No such file or directory!");
		return 1;	
	}	

	while (!feof(foo)){

        if(fgets(text, 1000+1, foo) == NULL) break;
        else
        {
		    if(strchr(text, '\n') != NULL)
            {
                line++;
                puts(" ");
            }
            printf("[Line %d] >> %s", line, text);
        }
	}		
    
	fclose(foo);
	
	return 0;
}
	

