# Assigning values 

The operators used to assign values are:

<br>

|Operator |Example					|Equivalent		  |Explanation																		|
|:--------|:----------------|:--------------|:----------------------------------------------|
|=				| a = b 					|a = b					|'a' assigned value contained in 'b'						|
|+=				| a += b 					|a = (a + b)		|'a' assigned value of 'a' + 'b' operation			|
|-+				| a -= b 					|a = (a - b)		|'a' assigned value of 'a' - 'b' operation			|
|*=				| a *= b 					|a = (a * b)		|'a' assigned value of 'a' * 'b' operation			|
|/=				| a /= b 					|a = (a / b)		|'a' assigned value of 'a' / 'b' operation			|
|%=				| a %= b 					|a = (a % b)		|'a' assigned remainder of 'a' / 'b' operation	|

<br>

## Example

```C
#include <stdio.h>

int main () {

	// declare two integer variables
	int a, b;

	// perform operations on variables and assign value
	printf("\nAssigned:\n");
	printf("Variable a = %d \n", a = 8); // a = 8
	printf("Variable b = %d \n", b = 4); // b = 4

	printf("\nAdded and assigned:\n");
	printf("Variable a+=b (8+4) a = %d\n", a+=b); // a = 12

	printf("\nSubtracted and assigned:\n");
	printf("Variable a-=b (12-4) a = %d\n", a-=b); // a = 8

	printf("\nMultiplied and assigned:\n");
	printf("Variable a*=b (8*4) a = %d\n", a*=b); // a = 32

	printf("\nDivided and assigned:\n");
	printf("Variable a/=b (32/4) a = %d\n", a/=b); // a = 8

	printf("\nModulated and assigned:\n");
	printf("Variable a%%=b (8%%4) a = %d\n", a%=b); // a = 0


	return 0;
}

```