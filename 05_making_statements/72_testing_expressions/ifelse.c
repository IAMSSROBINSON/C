#include <stdio.h>

int main () {

	// display output if expression evaluates to true
	if(5 > 1){
		printf("Five is greater than 1!\n"); // Five is greater than 1!
	}

	// display output if both expressions evaluate to be true
	if (5 > 1) {
		if (7 > 2){
				printf("Five is greater than 1 and 7 is greater than 2!\n"); // Five is greater than 1 and 7 is greater than 2!
		}
	}

	// display output when two expressions evaluate to false
	if (1 > 2) {
		printf("First expression is true!\n");
	}
	else if (1 > 3){
		printf("Second expression is true!\n");
	} 
	else {
		printf("Both expressions are false!\n"); // Both expressions are false!
	}


	return 0;
}