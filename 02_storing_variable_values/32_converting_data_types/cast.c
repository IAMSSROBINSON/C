#include <stdio.h>

int main () {

	float num = 5.75;
	char letter = 'A';
	int number = 100;
	int x = 7, y = 5;
	double decimal = 0.1234569;

	printf("float cast to int: %d'\n", (int)num ); // float cast to int: 5'
	printf("char cast to int: %d'\n", (int)letter ); // char cast to int: 65'
	printf("int cast to char: %c'\n", (char)number ); // int cast to char: d'
	printf("int cast to float arithmetic: %f'\n", (float)x / (float)y ); // int cast to float arithmetic: 1.400000'
	printf("double cast to float: %f'\n", (float)decimal); // double cast to float: 0.123457'

	return 0;
}