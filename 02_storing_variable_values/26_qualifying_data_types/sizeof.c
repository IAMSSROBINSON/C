#include <stdio.h>
#include <limits.h>


int main () {
	// output the size and range of short int data-type:
	printf("short int... \tsize: %d bytes \t", sizeof( short int )); 
	printf("%d to %d \n", SHRT_MAX, SHRT_MIN); // short int...    size: 2 bytes   32767 to -32768 

	// output the size and range of long int data-type:
	printf("long int... \t size: %d bytes \t", sizeof( long int));
	printf("%ld to %ld \n", LONG_MAX, LONG_MIN); // long int...      size: 8 bytes  9223372036854775807 to -9223372036854775808 

	// output the sizeof other data-types:
	printf("char... \tsize: %d byte \t \n", sizeof( char )); // char...         size: 1 byte  
	printf("float... \tsize: %d bytes \t \n", sizeof( float )); // float...        size: 4 bytes  
	printf("double... \tsize: %d bytes \t \n", sizeof( double )); // double...       size: 8 bytes  

	return 0;
}