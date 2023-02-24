/****************************************************************************************
 * NAME: Leandro Borges Ferreira
 * UFRGS's Card: 00182012 
 * LAB09
 * Platform: Linux
 *
 * Program Description: 
 * 	This program reads three grades from five students, putting all the input in a
 * 	matrix. It should print a table with all the info and also a column with the
 * 	final grades for each student. It should also print the average score for each
 * 	exam.  	
 ****************************************************************************************/                   


#include <stdio.h>
#include <stdlib.h>

#define STUDENT 2 	// Number of students, rows
#define EXAM 3		// Number of Exams, columns

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

	float grades[STUDENT][EXAM];
	float final[STUDENT], exams_average[EXAM];
	float sum = 0.0;
	int row, col;
	
	// Getting input from user, also creates an array with final grades
	for(row = 0; row < STUDENT; row++){
		printf("Enter student %d's grades: ", row+1);
		for(col = 0; col < EXAM; col++){
				scanf("%f", &grades[row][col]);
				sum += grades[row][col];
		}
		final[row] = sum / EXAM;
		sum = 0.0;
	}
	
	// Calculating average per exam
	sum = 0.0;
	for(col = 0; col < EXAM; col++){
		for(row = 0; row < STUDENT; row++)
			sum += grades[row][col];

		exams_average[col] = sum / STUDENT;
		sum = 0.0;			
	}

	// Printing the table w/ students grades and final grade
	printf("\n\t\t%sExam1\tExam2\tExam3\tFINAL GRADE%s\n", PURPLE, RESET);
	for(row = 0; row < STUDENT; row++){
		printf("Student %d:\t", row+1);
		for(col = 0; col < EXAM; col++)
			printf("%4.1f\t", grades[row][col]);
		printf("%s%4.2f%s\n", YELLOW, final[row], RESET);
	}

	// Printing the averages per exam
	printf("\n\t\t%sExam1\tExam2\tExam3%s", PURPLE, RESET);
	printf("\nAVERAGE:\t");
	for(row = 0; row < EXAM; row++)
		printf("%5.2f\t", exams_average[row]);

	return 0;
}

void title(void){

	printf("%s/===========================================================\\\n", BLUE);
	printf("|                %sLAB09: STUDENT'S GRADES%s                    |\n", GREEN, BLUE);
	printf("\\===========================================================/%s\n\n", RESET);
}
