#include <stdio.h>

int main(void){

	// color codes work on Linux, not sure if they do so on Windows

	char yellow[] = "\033[0;93m";
	char bred[] = "\033[1;31m";

	printf("%s/=============================\\\n", bred);
	printf("| %s  Leandro Borges Ferreira %s  |\n", yellow, bred);
	printf("\\=============================/\n");

	return 0;
}
