#include <stdio.h>

int main () {

	// declare and initialize two int variables and output their initial values
	int x = 10, y = 5;
	printf("\nx = %d\ny = %d\n", x, y);


	// insert 3 ^XOR statements and exchange variable values by binary bit manipulation
	x = x ^ y; 
	// x = decimal number: 10 (bit pattern:  1010) 
	// y = decimal number: 5 (bit pattern:   0101)
	// x = x ^ y (Return 1 in each bit where only 1 of two compared bits is 1) x = decimal number: 15 (bit pattern: 1111)
	printf("\nx: %d\n", x);

	y = x ^ y;
	// y = decimal number: 5 (bit pattern:   0101)
	// x = decimal number: 15 (bit pattern:  1111)
	// y = x ^ y (Return 1 in each bit where only 1 of two compared bits is 1) y = decimal number: 10 (bit pattern: 1010)
	printf("\ny: %d\n", y);

	x = x ^ y;
  // x = decimal number: 15 (bit pattern:  1111)
  // y = decimal number: 10 (bit pattern:  1010)
  // x = x ^ y (Return 1 in each bit where only 1 of two compared bits is 1) x = decimal number: 5 (bit pattern: 0101);
	printf("\nx: %d\n", x);


	return 0;
}