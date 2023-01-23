#include <stdio.h>

int main () {

	// declare and initialize variable to decimal value turning on one bit flag
	int flags = 8; // Binary: 1000 (1x8, 0x4, 0x2, 0x1)

	// assign new value to variable to turn on another bit flag
	flags = flags | 2; // 1000 | 0010 = 1010 (decimal: 10)

	// output all bitflag settings
	printf("\nFlag 1: %s\n", ((flags & 1) > 0) ? "ON" : "OFF");
	printf("Flag 2: %s\n", ((flags & 2) > 0) ? "ON" : "OFF");
	printf("Flag 3: %s\n", ((flags & 4) > 0) ? "ON" : "OFF");
	printf("Flag 4: %s\n\n", ((flags & 8) > 0) ? "ON" : "OFF");


	return 0;
}