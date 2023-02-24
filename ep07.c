/****************************************************************************************
 * Autor: Leandro Borges Ferreira
 * UFRGS's Card: 00182012 
 * EP07
 * Platform: Linux
 *
 * Program Description: 
 *      It reads a student registration code (int), the students grades (float), and put 
 *      all into arrays. The program then calculates and prints the average grade of the 
 *      class, and makes a table like output with the info for each student. Outputs the 
 *      registration code, the grade and points the students with grades below the average. 	
 ****************************************************************************************/                   


#include <stdio.h>
#define NUM 7 // number of students, grades, etc, it should be seven as asked

// functions
void title(void);

// color codes
char RESET[] = "\033[0m";  
char RED[] = "\033[0;31m";     
char GREEN[] = "\033[0;32m";   
char YELLOW[] = "\033[0;33m";  
char BLUE[] = "\033[0;34m";    
char PURPLE[] = "\033[0;35m";  
char CYAN[] = "\033[0;36m";

int main(void){
    	    	
    title();

    // Variables
    int code[NUM];
    float grade[NUM], sum = .0, mean = .0;
    char blank[]= "               ";
    char bad[] = "(Below Average)";

    // Getting Input
    for(int i = 0; i < NUM; i++){
        printf("Enter the registration code of student %d: ", i + 1);
        scanf("%d", &code[i]);
        printf("Type in the grade of student %d: ", i + 1);
        scanf("%f", &grade[i]);
        sum += grade[i];
    }

    // Computing average
    printf("-------------------------------------------------\n");
    mean = sum / NUM;
    printf("%sCLASS AVERAGE: %s%.2f%s\n\n", PURPLE, YELLOW, mean, RESET);

    // Output table
    printf("-------------------------------------------------\n");
    printf("| REGISTRATION CODE  | GRADE | BELOW AVERAGE?   |\n");
    printf("|-----------------------------------------------|\n");
    for(int i = 0; i < NUM; i++){
        if(grade[i] < mean) 
            printf("| %-18d | %s%.2f%s  | %s  |\n", code[i], YELLOW, grade[i], RESET, bad);
        else    
            printf("| %-18d | %s%.2f%s  | %s  |\n", code[i], GREEN, grade[i], RESET, blank);
    }
    printf("-------------------------------------------------\n\n");

	return 0;
}

void title(void){

	printf("%s/===========================================================\\\n", BLUE);
	printf("|                %sEP07: STUDENTS AND GRADES%s                  |\n", GREEN, BLUE);
	printf("\\===========================================================/%s\n\n", RESET);
}
