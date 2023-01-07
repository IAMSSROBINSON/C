#include <stdio.h>

int main () {
	register int localIndexNum = 0;

	while(localIndexNum < 5){

		localIndexNum++;
		printf("Pass: %d\n", localIndexNum);
	}
	return 0;
}