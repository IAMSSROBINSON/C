#include <stdio.h>

int main () {
	// Declare and initialize enumerated set of constants starting the count at 1
	enum SNOOKER{RED = 1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK};

	// create a int variable to store the sum of a count
	int total = 0;

	// display values of some of the constants
	printf("\nPotting a RED\t is worth: %d\n", RED);
	printf("Potting a YELLOW is worth: %d\n", YELLOW);
	printf("Potting a GREEN: is worth: %d\n", GREEN);
	printf("Potting a BROWN: is worth: %d\n", BROWN);
	printf("Potting a BLUE:  is worth: %d\n", BLUE);
	printf("Potting a PINK:  is worth: %d\n", PINK);
	printf("Potting a BLACK: is worth: %d\n", BLACK);

	// print the total sum of potting some of the colors
	printf("\nPotting a RED, BLACK and then a RED, BLUE will score you:\n%d + %d + %d + %d = %d points\n",RED, BLACK, RED, BLUE, RED + BLACK + RED + BLUE);

	return 0;
}