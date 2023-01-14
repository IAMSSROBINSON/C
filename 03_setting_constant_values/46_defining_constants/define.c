#include <stdio.h>
#define LINE "_________________________________________"
#define TITLE "The C Programming Language"
#define AUTHOR "  Brian W. Kernighan; Dennis M. Ritchie"

// macro: to identify Windows host platform
#ifdef _WIN32
#define SYSTEM "Windows"
#endif

// macro: to identify Linux host platform
#ifdef linux
#define SYSTEM "Linux"
#endif


int main () {
	// print the string-text substituted by the preprocessor
	printf("\n\n\t%s\n\t\t%s\t\n\t%s\n",LINE, TITLE, LINE);
	printf("\t%s\t\n\n\n", AUTHOR);

	return 0;
}