# Examining conditions

<br>

## Ternary operator ? : 

The first portion of this operator evaluates the expression for a true or false (boolean) value and then runs one of two statements depending on the result of the evaluation.

### Syntax:

(test expression) ? if-true-do-this : if-false-do-this;

<br>

```C
// Evaluate whether a number is odd or even
(7 % 2 == 0) ? printf("Odd number") : printf("Even number");

// 7 / 2 = 3.5, which means the remainder is not 0
// The first statement evaluates to true and is executed
```

<br>

The operator can also be used to display the correct grammar dependant on a result:

```C
// if it is true that num variable has a value of 1 print singular output
// if it is false that the num variable has a value of 1 print a plural output
printf("There %s %d", (num == 1) ? "is" : "are", num);
```

<br>

The operator can also be used to assign a value to a variable dependent on results:

```C
// if variable value 'a' is greater than variable value 'b' then assign it to the value of given variable

int number, a = 5, b = 2; // 3 int variables declared (last 2 initialized)
number = (a > b) ? a : b;

// a is greater than b thus number variable is assigned the value of a(5)
```

<br>

## Example

```C
#include <stdio.h>

int main () {

	// declare and initialize int variable
	int number = 100;

	// use ternary to output correct result parity dependent
	printf("The number: %d is: %s\n",number, (number % 2 == 0) ? "Even" : "Odd"); // The number: 100 is: Even


	// output correct phrase dependent on result
	printf("There %s ", (number == 1) ? "is" : "are"); // There are
	printf("%d %s\n", number, (number == 1) ? "apple" : "apples"); // 100 apples

	return 0;
}
```


