/*
*   Leandro 00182012
*   EP12
*/

#include <stdio.h>
#include <math.h>
#define N 10

float average(float *, int);
float deviation(float *, float, int);

int main(void){

    float height[N], tmp;
    float ave, dev;     // average and deviation respectively
    int i;

    // Getting the input
    printf("Enter %d values for the heights:\n", N);
    for(i = 0; i < N; i++){
        do{
            scanf("%f", &tmp);
            if(tmp < 0) printf("A height can't be negative. Try again: ");
            else height[i] = tmp;            
        }while(tmp < 0);      
    }

    printf("\n--------------------------------\n");

    // Calculating average
    ave = average(height, N);
    printf("Average: %.2f\n", ave);

    // Calculating deviation
    dev = deviation(height, ave, N);
    printf("Deviation: %.2f\n", dev);

    return 0;
}

float average(float heights[N], int n){
    float mi = 0.0f;
    int i;

    for(i = 0; i < n; i++){
        mi += heights[i];
    }
    return mi/n;
}

float deviation(float array[N], float m, int n){
    float sum = 0.0f;
    int i;

    for(i = 0; i < n; i++){
        sum += pow((array[i] - m), 2);
    }
    return sqrt(sum / (n-1));
}

