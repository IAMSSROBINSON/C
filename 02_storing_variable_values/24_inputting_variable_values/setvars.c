#include <stdio.h>

int main () {
	char letter;
	int num1, num2;
	 
	printf("Please enter your first initial: \n");
	scanf("%c", &letter);

	printf("Please enter two numbers separated by a space: \n");
	scanf("%d %d", &num1, &num2);

	printf("Your initial is: %c and the unique address in memory is: %p \n", letter, &letter);
	printf("Your first number is: %d and the unique address in memory is: %p\n" , num1, &num1);
	printf("Your second number is: %d and the unique address in memory is: %p\n", num2, &num1);
	return 0;
}