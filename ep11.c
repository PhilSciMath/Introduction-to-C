/*
*   Leandro 00182012 
*   ep11
*/

#include <stdio.h>
#include <math.h>

double my_cosine(double x, int n);
double power(double base, int exp);
int factorial(int f);
int exponent_validator(void);   // I'm restricting exponents to integers in the range [1, 6]

int main(void){

    double x;
    int N;

    printf("Enter the x value: ");
    scanf("%lf", &x);
    printf("Enter a value for N: ");       
    N = exponent_validator();    

    printf("\nmy_cosine(%lf) = %.8lf\n", x, my_cosine(x, N));
    printf("      cos(%lf) = %.8lf\n", x, cos(x));

    return 0;   
}

double my_cosine(double x, int n){  
    int i;
    double sum = 0.0f;
    for (i = 1; i < n; i++) {
        sum += power(-1, i) * power(x, 2*i) / factorial(2*i);
    }   
    return  sum + 1; 
}

int factorial(int f){
    int fac = f;

    if(f == 1) 
        return 1;
    else{
        while(f > 1){
            fac *= f-1;
            f--;                
        }
    return fac;
    }    
}

double power(double base, int exp){
	double num = 1.0f;
	for (; exp > 0; exp--)
        num *= base;    
	return num;	
}

int exponent_validator(void){
    int z;
    
    do{
        scanf("%d", &z);
        if(z < 1 || z > 6) 
            printf("Please, enter an integer in the range [1, 6]: ");
        else
            return z;      
    }while(z < 1 || z > 6);
}