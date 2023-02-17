#include <stdio.h>

// declare unnamed typedef struct data-type
// include char array as member
// give tagName
typedef struct {
	char string[5];
}ArrType;

// declare unnamed typedef struct data-type
// include char pointer as member
// give tagName
typedef struct {
	char *string;
}PtrType;

// declare one variable of each structure data-type
// initialize single member of each variable
ArrType arr = {'B', 'a', 'd', ' ', '\0'};
PtrType ptr = {"Good"};

int main () {

	// display string value of variable char array member
	printf("Array string is a %s", arr.string);

	// assign new values to each element of the char array 
	// display new string value
	arr.string[0] = 'I';
	arr.string[1] = 'd';
	arr.string[2] = 'e';
	arr.string[3] = 'a';
	arr.string[4] = '\0';
	printf("%s\n", arr.string);

	// display value of variable character pointer member
	printf("\nPointer string is a %s", ptr.string);

	// assign new value to character pointer 
	// display new string
	ptr.string = "Idea";
	printf("%s\n", ptr.string);


	return 0;
}