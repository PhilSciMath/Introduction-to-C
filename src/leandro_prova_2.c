/***********************************************************
 *	NAME: Leandro Borges Ferreira
 *	UFRGS CARD: 00182012
 *	PROGRAM TITLE: Prova 2
 *	DATE: 24-Nov-2021 
 ***********************************************************/
/*
 * NOTA: parece haver uma inconsistencia entre os enunciados da prova.
 * Considerando como linha 1 a que comeca com "1. Exercicio de programacao ...",
 * a quarta linha termina pedindo um vetor de 3 filmes. Mas no item 'a) ii',
 * pede-se um vetor de 2 filmes. Eu fiz respeitando esta ultima e a
 * tabela mostrada no topo que contem exatamente dois filmes para cada ator. Mas isso
 * nao deve importar tanto, pois havendo usado macros o programa deve dar conta
 * de um numero indeterminado de filmes e atores.
 */

#include <stdio.h>
#include <string.h>
#define MOVIE_NAME_SIZE 50+1 // string size for movie names
#define NAME_SIZE 30+1       // string size for countries and actors names
#define NUMBER_OF_ACTORS 3   // size of star array in main
#define NUMBER_OF_MOVIES 2   // number of movies per actor

// Struct defining the 'movie' type with title and year of release
typedef struct {

    char movie_name[MOVIE_NAME_SIZE];
    int release_year;

} movie;

// Struct defining 'star' type, with name, age, gender, country and movies 
typedef struct {

    char star_name[NAME_SIZE];
    int age;
    char gender;
    char country[NAME_SIZE];
    movie starred_movies[NUMBER_OF_MOVIES];

} star;

// Function to read data into a struct of type 'movie'
movie read_movie(void) {

    movie film;

    printf("Enter the name of a movie: ");
    fgets(film.movie_name, MOVIE_NAME_SIZE, stdin);
    if(strlen(film.movie_name) < MOVIE_NAME_SIZE)
        film.movie_name[strlen(film.movie_name) - 1] = '\0';

    printf("Inform the year of release: ");
    scanf(" %d", &film.release_year);
    getchar();    

    return film;
}

// Function to read data into a struct of type 'star', uses the one above
star read_star(void) {
    
    star actor;
    int i;    
    
    printf("Enter the actor's name: ");
    fgets(actor.star_name, NAME_SIZE, stdin);
    if(strlen(actor.star_name) < NAME_SIZE)   // kills '\n' added by fgets()
        actor.star_name[strlen(actor.star_name) - 1] = '\0';

    printf("Inform the %s's age: ", actor.star_name);
    scanf(" %d", &actor.age);

    getchar(); // instead of fflush() I use some getchar()s 
    printf("Enter the %s's gender: ", actor.star_name);
    actor.gender = getchar();
    getchar();

    printf("Type in the %s's country: ", actor.star_name);
    fgets(actor.country, NAME_SIZE, stdin);
    if(strlen(actor.country) < NAME_SIZE)     // same as above
        actor.country[strlen(actor.country) - 1] = '\0';
    
    for(i = 0; i < NUMBER_OF_MOVIES; i++)
        actor.starred_movies[i] = read_movie();
    
    puts(" ");

    return actor;
}

// Function to print a struct of type 'star'
void print_star(star x, FILE *bar) {
    
    int i;

    printf("ACTOR's NAME: %s\n", x.star_name);
    printf("ACTOR's AGE: %d\n", x.age);
    printf("ACTOR's GENDER: %c\n", x.gender);
    printf("ACTOR's COUNTRY: %s\n", x.country);
    
    // Now to file
 
    fprintf(bar, "ACTOR's NAME: %s\n", x.star_name);
    fprintf(bar, "ACTOR's AGE: %d\n", x.age);
    fprintf(bar, "ACTOR's GENDER: %c\n", x.gender);
    fprintf(bar, "ACTOR's COUNTRY: %s\n", x.country);
    
    for(i = 0; i < NUMBER_OF_MOVIES; i++) {
        printf("MOVIE #%d TITLE: %s\n", i+1, x.starred_movies[i].movie_name);
        printf("MOVIE #%d YEAR: %d\n", i+1, x.starred_movies[i].release_year);

        // to file
        fprintf(bar, "MOVIE #%d TITLE: %s\n", i+1, x.starred_movies[i].movie_name);
        fprintf(bar, "MOVIE #%d YEAR: %d\n", i+1, x.starred_movies[i].release_year);
    }

    for(i = 0 ; i < 40; i++) fprintf(bar, "-");
    fprintf(bar, "\n");

    putchar('\n');
}

// Function that does the computations in part (d) of the exam
void check_star(star x[], int n) {
    
    int count_movies = 0;
    int sum_women_ages = 0;
    int count_women = 0;
    int age_check = x[0].age;
    int oldest = 0;
    int i, j;
        
    for(i = 0; i < n; i++)
    {
        // checking oldest person position in the array
        if(age_check < x[i].age)
        {
            age_check = x[i].age;
            oldest++;
        }   
        
        // counting women and adding their ages
        if(x[i].gender == 'F' || x[i].gender == 'f')
        {
            sum_women_ages += x[i].age;
            count_women++;
        }

        // checking movies released after year two thousand
        for(j = 0; j < NUMBER_OF_MOVIES; j++)
        {
            if(x[i].starred_movies[j].release_year > 2000)
                count_movies++;
        }
    }

    // printing the results of the calculations above
    printf("Oldest Actor: %s is %d years old.\n", 
            x[oldest].star_name, x[oldest].age);
    
    if(count_women > 0) printf("Average of women's age: %.2f\n", 
            (float)sum_women_ages / count_women);
    else printf("No woman found!\n");

    printf("Total of movies released after 2000: %d\n\n", 
            count_movies);
}


int main(void)
{
    FILE *foo;

    // Creating a array of type 'star' 
    star actors[NUMBER_OF_ACTORS];
    int i;
    
    // Getting input into the array
    for(i = 0; i < NUMBER_OF_ACTORS; i++)
        actors[i] = read_star(); 
    
	// Printing the contents of the array to file and screen 
    foo = fopen("celebridades.txt", "w");
   
    for(i = 0; i < NUMBER_OF_ACTORS; i++)
        print_star(actors[i], foo);
        
    fclose(foo);

    // Checking features of the data inside the array
    check_star(actors, NUMBER_OF_ACTORS);	
	
	
	return 0;
}
	

