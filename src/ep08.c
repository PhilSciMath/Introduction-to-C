/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: ep08
 ***********************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>   

int main(void)
{
    int sfx1;
    int sfx2;    
    char pfx[8];
    char sfx[8];   
    
    srand(time(NULL));
	
	puts("Enter a prefix [xxx.xxx]: ");        
    fgets(pfx, sizeof(pfx), stdin);
    
    sfx1 = rand() % 255;
    sfx2 = rand() % 255; 
    
    sprintf(sfx, ".%d.%d", sfx1, sfx2);
    strcat(pfx, sfx);
    
    printf("IP: %s\n", pfx);    

	return 0;
}


