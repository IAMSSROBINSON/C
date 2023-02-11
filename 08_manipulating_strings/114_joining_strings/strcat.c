#include <stdio.h>
#include <string.h> // preprocessor instruction to include string.h functions in the program

int main () {

	// declare and initialize 4 char array variables with strings

	char s1[100] = "A Place for Everything ";
	char s2[] = "and Everything in its Place\n";
	char s3[100] = "The Truth is Rarely Pure ";
	char s4[] = "and Never Simple. - Oscar Wilde";

	// add s2 to s1 and display result
	printf("%s", strcat(s1, s2));
	// A Place for Everything and Everything in its Place

	// display value of just s1
	printf("%s", s1);
	// A Place for Everything and Everything in its Place

	// add first 17 char of s4 to s3 and display result
	printf("%s\n", strncat(s3, s4, 17));
	// The Truth is Rarely Pure and Never Simple.

	// display value of just s3
	printf("%s\n", s3);
	// The Truth is Rarely Pure and Never Simple.

	// add last 14 characters of s4 to s3:
	// first argument: s3 is being added to
	// second argument: add this to s3 (start count at beginning of s4 + 17 characters in)
	// third argument: end the count of second argument after 14 places
	printf("%s\n", strncat(s3, (s4 + 17), 14));
	// The Truth is Rarely Pure and Never Simple. - Oscar Wilde

	// display value of just s3
	printf("%s\n", s3);
	// The Truth is Rarely Pure and Never Simple. - Oscar Wilde


	return 0;
}