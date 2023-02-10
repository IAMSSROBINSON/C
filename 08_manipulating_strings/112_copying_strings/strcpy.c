#include <stdio.h>
#include <string.h>

int main () {

	// declare 2 char arrays with strings
	char string1[] = "Larger text string";
	char string2[] = "small string";

	// display string content, string size(number of elements) and length(in characters)
	printf("string1: %s \t size / elements: %lu\tlength / characters: %lu\n",string1, sizeof(string1), strlen(string1));
	// >> string1: Larger text string      size / elements: 19    length / characters: 18

	// copy second char array into first
	strcpy(string1, string2);

	// display string content, string size(number of elements) and length(in characters)
	printf("string1: %s \t size / elements: %lu\tlength / characters: %lu\n",string1, sizeof(string1), strlen(string1));
	// >> string1: small string    size / elements: 19    length / characters: 12

	// use 'strncpy' to copy first 5 characters of second char array to first + add null character
	strncpy(string1, string2, 5);
	string1[5] = '\0';

	// display string content, string size(number of elements) and length(in characters)
	printf("string1: %s \t size / elements: %lu\tlength / characters: %lu\n",string1, sizeof(string1), strlen(string1));
	// >> string1: small   size / elements: 19    length / characters: 5


	







	return 0;
}