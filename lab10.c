/*
*   Leandro B. F.
*   lab10
*/

#include <stdio.h>
#define MAX 3

float read_positive_number();

int main(void){

    int i = MAX;
    float num = 0.0f;

    do{
        printf("=== Enter a positive number:\n"); 
        num += read_positive_number();        
        i--;        
    } while (i > 0);

    printf("\nAverage of the numbers: %.2f\n", num/MAX);
    
    return 0;
}

float read_positive_number(){ 
    float x;    

    do{
        scanf("%f", &x);      
        if( x >= 0.0f)
            return x;
        else printf("Invalid number!\n");
    }while (x < 0);        
}