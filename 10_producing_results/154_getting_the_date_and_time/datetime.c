#include <stdio.h>
#include <time.h>	

int main () {
	
	// declare char array variable 
	// declare time_t variable
	// declare tm struct
	char buffer[100];
	time_t elapsed;
	struct tm *now;

	// get current elapsed seconds count since Epoch
	elapsed = time(NULL);

	// convert count to localtime components
	now = localtime(&elapsed);

	// display date and time in standard format
	printf("%s\n", asctime(now));

	// display individual date and time components
	strftime(buffer, 100, "Today is: %A, %B %d.\n", now);
	printf("%s", buffer);

	strftime(buffer, 100, "Today is %I: %M %p.\n", now);
	printf("%s", buffer);


	return 0;
}

/*

DISPLAYED OUTPUT:

Today is: Tuesday, February 28.
Today is 02: 46 AM.

*/