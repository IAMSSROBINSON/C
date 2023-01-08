# Converting data types

When compiling a program the compiler will implicitly convert one data-type into another if it deems it logical to do so e.g. if an int value is assigned to a float data-type variable then the complier will convert the int value to a floating point value and express it as such. 

<br>

## Casting
Any data-type stored in a variable can also be explicitly coerced into a variable of a different data-type by the process known as 'casting'.

> A cast states the data-type to which the variable should be converted in parenthesis prior to the name of the original variable (of a differing data-type) being converted.

Syntax:

newVariableName = (toModifierDataType)fromOriginalVariableName

```C
newVariableName = (int)fromOriginalVariableName;

// casting does not change the original data-type of the original variable it merely copies the value and converts it to a different data-type for a new variable
```

<br>

### Conversions: 

<br>

|From    |To      |Example |
|:-------|:-------|:-------|
|float 5.75  |int 5    |value truncates at the decimal point with no rounding.|
|char 'A'   |int 65    |value converts to the numerical ASCII code value that represents that character|
|int 65 |char 'A' |integer value converts to the ASCII character code equivalent|
int x=7, y=5   |float z=x/y  |calculation will convert to 1.0000000 so for accurate calculation the statements need to be casted: (float)x / (float)y = 1.400000|
double 0.1234569 |float 0.123457   |value will be rounded up or down to nearest figure|

<br>

### Code examples: 

<br>

```C
#include <stdio.h>

int main () {

	float num = 5.75;
	char letter = 'A';
	int number = 100;
	int x = 7, y = 5;
	double decimal = 0.1234569;

	printf("float cast to int: %d'\n", (int)num ); // float cast to int: 5'
	printf("char cast to int: %d'\n", (int)letter ); // char cast to int: 65'
	printf("int cast to char: %c'\n", (char)number ); // int cast to char: d'
	printf("int cast to float arithmetic: %f'\n", (float)x / (float)y ); // int cast to float arithmetic: 1.400000'
	printf("double cast to float: %f'\n", (float)decimal); // double cast to float: 0.123457'

	return 0;
}
```