#include <stdio.h>

int main () {

	// declare int variable
	// declare and initialize int array variable 
	int i;
	int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// declare and initialize pointer at first array element
	int *ptr = numbers;

	// display address and value of pointer
	printf("\nAddress: %p\n", ptr); // 0x16dbbf1c0
	printf("Value: %d\n", *ptr); // 1

	// increment pointer to move along array elements one by one
	ptr++;
	printf("\nAddress: %p\n", ptr); // 0x16dbbf1c4
	printf("Value: %d\n", *ptr); // 2

	ptr++;
	printf("\nAddress: %p\n", ptr); // 0x16dbbf1c8
	printf("Value: %d\n", *ptr); // 3

	ptr++;
	printf("\nAddress: %p\n", ptr); // 0x16dbbf1cc
	printf("Value: %d\n", *ptr); // 4

	ptr++;
	printf("\nAddress: %p\n", ptr); // 0x16dbbf1d0
	printf("Value: %d\n", *ptr); // 5

	ptr++;
	printf("\nAddress: %p\n", ptr); // 0x16dbbf1d4
	printf("Value: %d\n", *ptr); // 6  

	ptr++;
	printf("\nAddress: %p\n", ptr); // 0x16dbbf1d8
	printf("Value: %d\n", *ptr); // 7

	ptr++;
	printf("\nAddress: %p\n", ptr); // 0x16dbbf1dc 
	printf("Value: %d\n", *ptr); // 8

	ptr++;
	printf("\nAddress: %p\n", ptr); // 0x16dbbf1e0
	printf("Value: %d\n", *ptr); // 9

	ptr++;
	printf("\nAddress: %p\n", ptr); // 0x16dbbf1e4
	printf("Value: %d\n", *ptr); // 10

	// move the memory back two places 
	ptr -= 2;
	printf("\nAddress: %p\n", ptr); // 0x16dbbf1dc
	printf("Value: %d\n", *ptr); // 8

	// move the memory back two places 
	ptr -= 2;
	printf("\nAddress: %p\n", ptr); // 0x16dbbf1d4
	printf("Value: %d\n", *ptr); // 6

	// move the memory back two places 
	ptr -= 2;
	printf("\nAddress: %p\n", ptr); // 0x16dbbf1cc
	printf("Value: %d\n", *ptr); // 4

	// move the memory back two places 
	ptr -= 2;
	printf("\nAddress: %p\n", ptr); // 0x16dbbf1c4
	printf("Value: %d\n", *ptr); // 2

	// move the memory back one place to the beginning of the array
	ptr -= 1;
	printf("\nAddress: %p\n", ptr); // 0x16dbbf1c0
	printf("Value: %d\n", *ptr); // 1


	// loop to display each array elements index number and value
	for(i = 0; i < 10; i++){
		printf("\nElement: %d\nValue: %d, \n\n", i, *ptr);
		ptr++;
	}


	return 0;
}