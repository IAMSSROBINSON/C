#include <stdio.h>

int main () {
	int arr[3];

	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 300;

	char text[14] = {'C',' ','P','r','o','g','r','a','m','m','i','n','g','\0'};

	printf("First element value: %d\n", arr[0]);
	printf("Second element value: %d\n", arr[1]);
	printf("Third element value: %d\n", arr[2]);
	printf("String value: %s\n", text);
	return 0;
}