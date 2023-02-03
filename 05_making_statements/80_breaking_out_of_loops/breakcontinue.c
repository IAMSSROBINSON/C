#include <stdio.h>

int main () {

	// declare 2 int variables
	int i, j;

	// use two nested loops to display their counter values on each of their 3 iterations

	for(int i = 1; i < 4; i++){
		for(int j = 1; j < 4; j++){
			printf("Running I =  %d J = %d\n",i, j);
		}
	}
	

	return 0;
}