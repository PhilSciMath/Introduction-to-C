/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: ep07
 ***********************************************************/

#include <stdio.h>
const int MAX = 10;

void bar(void)
{
    printf("-----------------------------\n");
}

int main(void)
{
    int num[MAX];
    int biggest;
    int index;
    int i;

    bar();
    printf("ENTER %d VALUES BELLOW:\n", MAX);
    bar();
    printf("\n");

    for(i = 0; i < MAX; i++)
    {
        printf("Value %d: ", i+1);
        scanf("%d", &num[i]);
    }

    biggest = num[0];
    index = 0;

    for(i = 1; i < MAX; i++)
    {
        if(biggest < num[i])
        {
            biggest = num[i];
            index = i;
        }
    }

    bar();
    printf("\nMAX VALUE: %d, INDEX: %d\n", biggest, index);

    printf("Elements with index less than %d: ", index);
    for(i = 0; i < index; i++)
        printf("%d, ", num[i]);

    printf("\nElements with index greater than %d: ", index);
    for(i = index + 1; i < MAX; i++)
        printf("%d, ", num[i]);

    printf("\n\n");

	return 0;
}


