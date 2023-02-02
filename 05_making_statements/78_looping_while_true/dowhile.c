#include <stdio.h>


int main () {
	// declare count variable 
	// declare and initialize an array variable of 3 elements
	int i;
	int array[3] = {100, 200, 300};

	// use while loop to output each element
	i = 0;
	while(i < 3){
		printf("While loop: %d\n", array[i]);
		i++;
	}

	// use do while loop to output each element
	i = 0;
	do{
		printf("Do while loop: %d\n", array[i]);
		i++;
	} while (i < 3);


	return 0;
}

/*

DISPLAYED OUTPUT:

While loop: 100
While loop: 200
While loop: 300
Do while loop: 100
Do while loop: 200
Do while loop: 300

*/