#include <stdio.h>

void menu();
void action(int option);

int main () {

	// call first custom function
	menu();

	return 0;
}

// define function, pass menu option as argument to another function
void menu () {
	int option;
	printf("\n\tWhat would you like to do?");
	printf("\n\t1.Square are number");
	printf("\n\t2.Multiply two numbers");
	printf("\n\t3.Exit\n");
	scanf("%d", &option);
	action(option);
}

