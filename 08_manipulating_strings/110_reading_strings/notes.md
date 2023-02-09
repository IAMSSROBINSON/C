# Reading strings

Strings are arrays of characters with `\0` characters placed as the last element in the array. Because they are arrays the name of the array acts like a pointer to the entire string of characters. 

Single characters should be enclosed by single quotes: 'C';
Multi-character strings should be enclose by double quotes: "ABC";

<br>

## What characters are included

All characters (upper and lowercase), symbols, punctuation and non-printing characters e.g. `\n`.

<br>

## ASCII

All characters are also represented as a numerical ASCII (American Standard Code for Information Exchange) code value - this means that the characters can be changed arithmetically (the ++ operator can change a char character into a different one with a higher ASCII numerical value) and lowercase characters are always +32 higher in value than their uppercase counterparts and thus the uppercase letters are -32 lower than their lowercase counterpart.

```C
char letter = 'M'; // 'M'
letter+= 32; // 'm'
```

<br>

## Using sizeof on strings

When using the `sizeof(nameOfString)` operator on a string it returns the string's array in length (number of characters). 

<br>

## Assigning strings

A string of char data-type can be assigned to an array (arrays act like pointers).
A string can be assigned to a pointer of char data-type (arrays act like pointers).

```C
#include <stdio.h>

int main () {

	char stringArray[] = "Alphabet"; // 
	printf("%s\n", stringArray);

	char *ptr_stringArray = "xylophone";
	printf("%s\n", ptr_stringArray);

	return 0;
}
```

<br>

## String inputs

A string word or character can be taken from a user using the `scanf()` function but it stops reading when it comes across a space and thus cannot read sentences. 

<br>

## <stdio.h> multi-word solution to scanf()

### fgets()

- reads inputs from user
- accepts all characters ad spaces as characters 
- assigns the string to a character array(*pointer) with string as its first argument
- second argument should specify the number of characters to read
- third argument should specify where to read from e.g. stdin for standard input
- automatically adds `\0' null character to the end of the character array when return key is pressed by the user giving the string constant status

<br>

### puts()

- outputs a string given as its argument
- automatically adds `\0' null character to the end of the string
- automatically adds a '\n' newline after the output

<br>










