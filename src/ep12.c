/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: ep12
 ***********************************************************/

#include <stdio.h>

const int N = 12;
void swap(int *, int, int);

int main(void)
{
    int vector[N];
    int a, b, i;
    
    for(i = 0; i < N; i++)
    {
        printf("Enter value %d: ", i+1);
        scanf("%d", &vector[i]);
    }
    
    puts("Enter numbers A and B: ");
    scanf("%d %d", &a, &b);
    
    puts("--- Before swap:");
    for(i = 0; i < N; i++)
        printf("%d ", vector[i]);
    
    swap(vector, a, b);
    
    puts("\n--- After swap: ");
    for(i = 0; i < N; i++)
        printf("%d ", vector[i]);
	
	return 0;
}
	
void swap(int v[N], int x, int y)
{
    int i;
    
    for(i = 0; i < N; i++)    
        if(v[i] == x)
            v[i] = y;
}




