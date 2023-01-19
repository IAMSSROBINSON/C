#include <stdio.h>

int main () {

	// initialize two int variables
	int yes = 1, no = 0;

	// display the result of performing logic on the variables
	printf("AND (no&&no): %d\n", no && no); // 0
	printf("AND (yes&&no): %d\n", yes && no); // 0
	printf("AND (yes&&yes): %d\n", yes && yes); // 1

	printf("OR (no||no): %d\n", no || no); // 0
	printf("OR (yes||no): %d\n", yes || no); // 1
	printf("OR (yes||yes): %d\n", yes || yes); // 1

	printf("NOT (yes !yes): %d %d\n", yes, !yes); // 1 0
	printf("NOT (no !no): %d %d\n", no, !no); // 0 1

	return 0;
}