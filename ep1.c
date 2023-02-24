#include <stdio.h>

int main(void){

	// color codes work on Linux, not sure if they do so on Windows
	
	char yellow[] = "\033[0;93m";
	char bred[] = "\033[1;31m";

	printf("%s------------ Sparrow ------------%s\n\n", bred, yellow);

	printf("        .---.                   \n");
	printf("    _ /      ' .---.            \n");
	printf("    >|  o     `     `\\         \n");
	printf("    ` \\        .---._ '._ ,    \n");
	printf("       '-.;          /`  /'     \n");
	printf("          \\     '._.'  /       \n");
	printf("           `\";--\\_/           \n");
	printf("             /    |             \n");
	printf("            -;-  -;-            \n\n");

	printf("%s----------------------------------\n", bred);

	return 0;
}
