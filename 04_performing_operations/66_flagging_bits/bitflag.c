#include <stdio.h>

int main () {

	// declare and initialize variable to decimal value turning on one bit flag
	int flags = 8; // binary: 1000 (1x8, 0x4, 0x2, 0x1)

	// assign new value to variable to turn on another bit flag
	flags = flags | 2; // 1000 | 0010 = 1010 (decimal: 10)

	// output all bitflag settings
	printf("\nFlag 1: %s\n", ((flags & 1) > 0) ? "ON" : "OFF");
	printf("Flag 2: %s\n", ((flags & 2) > 0) ? "ON" : "OFF");
	printf("Flag 3: %s\n", ((flags & 4) > 0) ? "ON" : "OFF");
	printf("Flag 4: %s\n\n", ((flags & 8) > 0) ? "ON" : "OFF");

	// mask first 4 bits of the byte and flip all bit flag settings
	char mask = 15; // binary: 00001111
	flags = ~flags & mask; // ~(1010 & 1111 = 1010) = 0101

	// output reversed bitflag settings and decimal value representation
	printf("\nFlag 1: %s\n", ((flags & 1) > 0) ? "ON" : "OFF");
	printf("Flag 2: %s\n", ((flags & 2) > 0) ? "ON" : "OFF");
	printf("Flag 3: %s\n", ((flags & 4) > 0) ? "ON" : "OFF");
	printf("Flag 4: %s\n\n", ((flags & 8) > 0) ? "ON" : "OFF");
	printf("Flags decimal value is %d \n", flags);

	// shift "on" bit flags 1 bit to the left and output new decimal value of new pattern
	flags = flags << 1;
	printf("Flags decimal value is %d \n", flags);



	return 0;
}