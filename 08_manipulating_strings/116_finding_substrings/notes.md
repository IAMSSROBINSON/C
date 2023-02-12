# Finding substrings

A 'substring' is a sequence / pattern of characters than can be found within the makeup of another string.

<br>

## `#include <string.h>`

To have the ability to perform substring actions we add the preprocessor directive and header file `#include <string.h>` to the start of the program and the `strstr()` function for searching for substrings become available. 

<br>

## `strstr()`

The`strstr()` function accepts two arguments, the first is the full string to search and the second is the substring / sequence of characters seeking to be found.

Syntax:

`strstr(InsideThisString, SeekThisSubString);`

<br>

## NULL or pointer

The `strstr()` function stops searching inside a string when it finds the first occurrence of a substring. It does not continue to search for more occurrences.

If the substring is not found the function returns `NULL`.
`==` and `!=` operators can be used to compare return value of using the `strstr()` function against a `NULL` value to determine actions thereafter a substring is found or not.
If the substring is found the function returns a pointer to the first character of the first occurrence of substring.

<br>

## Pointer arithmetic

Subtracting the return value of the `strstr()` function from the string being searched returns the index number of the first substring character within the searched string.

Example:

```C
#include <stdio.h>
#include <string.h>

int main () {

	char stringToSearch[] = "This is a string";
	char seekThisSubString[] = "is";

	strstr(stringToSearch, "is");

	printf("%ld\n", strstr(stringToSearch, seekThisSubString) - stringToSearch); // 2

	return 0;
} 
```

<br>

## String compare `strcmp()` 

To compare two strings the `strcmp()` function is used. The ASCII code values are used with comparing each character and their position thus lowercase and uppercase comparison matter.

Syntax:

`strcmp(variableNameOfString, "compareWithThisString");`

 When the match is identical in everyway 0 is returned otherwise a positive of negative number is returned depending on the string values.

<br>

## `strchr()` and `strrchr()`

The function `strchr()` is used to find the occurrence of a character within a string.
The function `strrchr()` is used to find the last occurrence of a character within a string.

