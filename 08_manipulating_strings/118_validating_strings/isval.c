#include <stdio.h>
#include <ctype.h> // header file allows access to functions that perform tests on characters. 

int main () {

	// declare  3 variables and a flag variable with true value of 1
	char string[7];
	int i;
	int flag = 1;

	// prompt user for input and assign string to array
	puts("Enter six digits without spaces: \n");
	gets(string);

	// loop over char array characters and change flag to false (0) if a character !isdigit();
	for (int i = 0; i < 6; i++)
	{
		if(!isdigit(string[i])){
			flag = 0;
		} // describe any non-numerical character
		if(isalpha(string[i])){
			printf("Letter: %c found!\n", toupper(string[i]));
		}
		else if(ispunct(string[i])){
			printf("Punctuation found!\n");
		}
		else if(isspace(string[i])){
			printf("Space found!\n");
		}
	}

	// describe flag status
	flag ? puts("Entry Valid") : puts("Invalid Entry!");
	

	return 0;
}

/*

DISPLAYED OUTPUT:

Enter six digits without spaces: 
123456 
Entry Valid

--------------------------------

Enter six digits without spaces: 
A23456
Letter: A found!
Invalid Entry!

*/