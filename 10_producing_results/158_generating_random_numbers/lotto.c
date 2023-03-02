#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main () {

	// declare int and char variables
	int i, r, temp, numbers[100];
	char buf[4], str[100] = {"Your Six Lucky Numbers Are: "};

	// seed srand() with current elapsed seconds
	srand(time(NULL));

	// fill array with numbers 0 - 59
	for (i = 0; i < 60; i++)
	{
		numbers[i] = i;
	}

	// shuffle sequence into random order
	for (i = 1; i < 60; i++)
	{
		r = (rand() % 59) + 1;
		temp = numbers[i];
		numbers[i] = numbers[r];
		numbers[r] = temp;
	}

	// add numbers from six array elements to string
	for (i = 1; i < 7; i++)
	{
		sprintf(buf, "%d", numbers[i]);
		strcat(buf, " ");
		strcat(str, buf);
	}

	// display string
	printf("\n%s\n\n", str);
	

	return 0;
}

/*

DISPLAYED OUTPUT:

Your Six Lucky Numbers Are: 1 11 10 12 4 36 

*/