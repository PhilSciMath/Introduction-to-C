/*
*   Leandro B. F.
*   ep10
*/

#include <stdio.h>
#define MAX 3

int read_age(void);
char read_gender(void);
float read_grade(void);
void line(void);

int main(void){

    int i = MAX;
    int counter = 1;
    int age = 0;
    char gender = '#';
    float grade = 0.0f;

    do{
        printf("=== Enter sudent #%d's age:\n\n", counter);  
        age = read_age();
	printf("=== Enter student #%d's gender:\n\n", counter);
	gender = read_gender();
	printf("=== Enter student #%d's grade:\n\n", counter);
	grade = read_grade();	
	printf("\n=== Data verified! ===\nAge %d, Gender %c, Grade %.2f.\n", age, gender, grade);
        line();
	i--;
	counter++;	
    } while (i > 0);

    return 0;
}

int read_age(void){ 
    int x;    

    do{
        scanf("%i", &x);      
        if( x >= 0 && x <= 122)
            return x;
        else printf("Invalid Age: it must be in the range [0, 122]!\n");
    }while (x < 0 || x > 122);        
}

char read_gender(void){
	char g = '&';
	int j = 0;
	do{
		scanf(" %c", &g);
		
		switch(g){
			case 'M': return g; j++; break;
			case 'm': return g; j++; break;
			case 'F': return g; j++; break;			 
			case 'f': return g; j++; break;
			default:
		  		printf("Invalid gender: it must be 'F', 'f', 'M' or 'm'!\n");
      			break;			
		}
	}while(j == 0);
}

float read_grade(void){
	float f = 0.0f;

	do{
		scanf("%f", &f);
		if(f < 0.0 || f > 10.0)
			printf("Invalid grade: it must be in the range [0.0, 10.0]!\n");
		else return f;
		
	}while(f < 0.0 || f > 10.0);
}

void line(void){
	printf("\n-----------------------------------------\n");
}
