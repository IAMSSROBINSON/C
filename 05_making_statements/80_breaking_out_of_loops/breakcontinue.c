#include <stdio.h>

int main () {

	// declare 2 int variables for use within loops
	int i, j;

	for(int i = 1; i < 4; i++){
		for(int j = 1; j < 4; j++){
			if(i == 1 && j == 1){
				printf("Continues inner loop when i = %d and j = %d\n", i, j);
				continue;
			}
			if(i == 2 && j == 1){
				printf("Break inner loop when i = %d and j = %d\n", i, j);
				break;
			}
			printf("Running I =  %d J = %d\n",i, j);
		}
	}
	

	return 0;
}