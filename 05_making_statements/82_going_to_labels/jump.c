#include <stdio.h>

int main () {

	// declare 2 int variables
	int i, j;
	int flag = 1;

	// use 2 nested loops to display the index values
	// add goto statement within loop to jump outside 
	for(int i = 1; i < 4; i++){
		for(int j = 1; j < 4; j++){
			if(i == 2 && j == 1){
				goto end;
			}
		printf("I = %d J = %d\n", i, j);
		}
	} end:
	

	// int flag = 1 variable added above to represent boolean true value
	for(int i = 1; i < 4; i++){
		if(flag){
			for(int j = 1; j < 4; j++){
				if(i == 2 && j == 1){
					flag = 0;
				}
			if(flag){
				printf("\tI = %d J = %d\n", i, j);
			}
			}
		}
	} 
	

	return 0;
}

