# Measuring size

The `sizeof()` operator returns an integer value in 'bytes' of memory needed to store the content of the operand e.g. `sizeof(int)`. A variable / data object name can also be supplied to the `sizeof()` operator to retrieve the amount of memory it occupies. 

<br>

## Basic storate unit

The `char` data-type stores one character and occupies just 1 byte of memory. This is the basic storage unit defined in C:

```C
#include <stdio.h>

int main () {

	printf("%lu\n", sizeof(char));  // will return: 1 byte

	return 0;
}
```

<br>

### Typical storage values

|Data-type  | Memory in bytes |
|:----------|:----------------|
|char    	  |1 byte					  |
|int      	|4 byte					  |
|float     	|4 byte					  |
|double     |8 byte					  |

(Memory in bytes may vary as they are not defined by the standards and are implementations defined - it is best to use the `sizeof()` operator to measure actual memory allocation)

<br>

## Arrays

The memory allocated for an array = amount of elements in array * data-type memory in bytes:

```C
#include <stdio.h>

int main () {
	
	printf("%lu bytes\n", sizeof(int[3])); // will return: 12 bytes (3 * 4 = 12)

	return 0;
}
```

<br>

## Structures

It can be important to use the `sizeof` operator to determine the memory allocation for user defined structures which contain varying data-types. Total memory allocation may go beyond the normal amount for each member inside. 32-bit computer systems can add a padding value as they like to read and write data in word size chunks of 4 bytes and thus allocate memory in multiples of 4. A Struct with 'int score and char grade' members which would normally allocate (4 + 1 bytes) may therefore be allocated 8 bytes by default.

