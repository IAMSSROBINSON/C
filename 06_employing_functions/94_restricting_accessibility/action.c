#include <stdio.h>

// declare custom prototypes (in each file containing calls to these functions to prevent a compiler implicit declaration of function warning)
void menu();
void action(int option);

// define two static functions
static int square (int a){
	return (a * a);
}

static int multiply (int a, int b){
	return a * b;
}

// define action function
// call static function
void action (int option) {
	int n1, n2;
	
	switch(option){

	case 1:
		printf("Enter an integer to be squared: \n");
		scanf("%d", &n1);
		printf("%d x %d = %d\n", n1, n1, square(n1));
		menu();
		break;
	
	case 2:
		printf("Enter first integer to be multiplied\n");
		scanf("%d", &n1);
		printf("Enter second integer to be multiplied\n");
		scanf("%d", &n2);
		printf("%d x %d = %d\n", n1, n2, multiply(n1, n2));
		menu();
		break;

	default:
		return;
	}
}


