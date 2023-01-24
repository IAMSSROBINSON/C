#include <stdio.h>

int main () {

	
	printf("\nDefault precedence ((2 * 3) + 4) - 5: %d\n", 2*3+4-5); // 5
	printf("\nExplicit precedence 2 * ((3 + 4) - 5): %d\n", 2*((3+4)-5)); // 4

	printf("\nDefault precedence (7 * 3) %% 2: %d\n", 7*3%2); // 1
	printf("\nExplicit precedence 7 * (3 %% 2): %d\n", 7*(3%2)); // 7

	int num = 9;
	printf("\nDefault precedence (8 / 2) * 4: %lu\n", --num/2*sizeof(int)); // 16
	printf("\nExplicit precedence 8 / (2 * 4): %lu\n", --num/(2*sizeof(int))); // 1


	return 0;
}