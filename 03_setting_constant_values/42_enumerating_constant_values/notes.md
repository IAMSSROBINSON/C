# Enumerating constant values

Using the `enum` keyword allows for the creation of a sequence of integer constants (known as an enumeration set) inside of curly braces and separating each constant with a comma. A name for this sequence can also be optionally given:

<br>

### Syntax:
```C
enum NAME_OF_SEQUENCE{CONST_NAME_A, CONST_NAME_B, CONST_NAME_C, CONST_NAME_D};
```

<br>

## Values

With the count starting at 0, each of the constants will by default have a value of +1 greater than the constant before it. A specific value can be assigned to a constant and the +1 sequence continues from there unless it too is assigned a specific value and a set is allowed duplicate values:

```C
// MON HAS A VALUE OF 0 AND TUES HAS A VALUE OF 1
enum WEEKDAY_SET_A{MON, TUES, WED, THURS, FRI, SAT, SUN}; 

// MON HAS A VALUE OF 1 AND TUES HAS A VALUE OF 2
enum WEEKDAY_SET_B{MON = 1, TUES, WED, THURS, FRI, SAT, SUN}; 
```

<br>

## Displaying enum values and performing arithmetic operations

```C
#include <stdio.h>

int main () {
	// Declare and initialize enumerated set of constants starting the count at 1
	enum SNOOKER{RED = 1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK};

	// create a int variable to store the sum of a count
	int total = RED + BLACK + RED + BLUE;

	// display values of some of the constants
	printf("\nPotting a RED\t is worth: %d\n", RED);
	printf("Potting a YELLOW is worth: %d\n", YELLOW);
	printf("Potting a GREEN: is worth: %d\n", GREEN);
	printf("Potting a BROWN: is worth: %d\n", BROWN);
	printf("Potting a BLUE:  is worth: %d\n", BLUE);
	printf("Potting a PINK:  is worth: %d\n", PINK);
	printf("Potting a BLACK: is worth: %d\n", BLACK);

	// print the total sum of potting some of the colors
	printf("\nPotting a RED, BLACK and then a RED, BLUE will score you:\n%d + %d + %d + %d = %d points\n",RED, BLACK, RED, BLUE, total);

	return 0;
}

/*

PRINTS THE FOLLOWING:

Potting a RED    is worth: 1
Potting a YELLOW is worth: 2
Potting a GREEN: is worth: 3
Potting a BROWN: is worth: 4
Potting a BLUE:  is worth: 5
Potting a PINK:  is worth: 6
Potting a BLACK: is worth: 7

Potting a RED, BLACK and then a RED, BLUE will score you:
1 + 7 + 1 + 5 = 14 points

/*

```

