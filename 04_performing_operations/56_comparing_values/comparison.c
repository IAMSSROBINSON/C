#include <stdio.h>

int main () {

	// declare and initialise 3 int and 2 char variables
	int zero = 0, nil = 0, one = 1;

	char upr = 'A', lwr = 'a';

	// print the result of comparisons
	printf("Equality (0==0): %d\n", zero == nil); // 1
	printf("Equality (0==1): %d\n", zero == one); // 0
	printf("Equality (A==a): %d\n", upr == lwr); // 0
	printf("Inquality (A!=a): %d\n", upr != lwr); // 1 (ASCII: A:65 a:97)
	printf("Greater than (1>0): %d\n", one > nil); // 1
	printf("Less than (1<0): %d\n", one < nil); // 0
	printf("Grean than or equal to (0>=0): %d\n", zero >= nil); // 1
	printf("Less than or equal to (1<=0): %d\n", one <= nil); // 0


	return 0;
}