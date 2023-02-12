#include <stdio.h>
#include <string.h>

int main () {

	// declare and initialize to char array variables
	char string[] = "No Time Like The Present";
	char substring[] = "Time";

	// display message if second string cannot be found in first
	if(strstr(string, substring) == NULL){
		printf("Substring: \"%s\" not found\n", substring);
	}

	// display memory address and element index number within first string at which first character of substring occurs
	printf("\"%s\" Found at Memory Address: %p\n", substring,  strstr(string, substring)); // 0x16d373153
	printf("Element Index Number: %ld\n",  strstr(string, substring) - string); // 3

	// display results of comparisons
	printf("%s VS \"Time\":%d \n", substring, strcmp(substring, "Time")); // 0 // Match!
	printf("%s VS \"time\":%d \n", substring, strcmp(substring, "time")); // -1 // Not matched
	printf("%s VS \"TIME\":%d \n", substring, strcmp(substring, "TIME")); // 1 // Not matched


	return 0;
}