# Joining strings

'String concatenation' is when two or more strings are combined to form a single string thereby changing the original string length (which much be large enough to accommodate the final string length) as characters are added.

<br>

## <string.h>

The ` #include <string.h>` header file gives function capabilities to concatenate strings in a program:

<br>

### strcat()

Syntax:

`strcat(firstString, secondStringToAddToFirstString);`

- returns the single concatenated string
- firstString array must be large enough to accommodate all concatenated strings to avoid error

<br>

### strncat()

Syntax:

`strncat(firstString, secondStringToAddToFirstString, lengthOfSecondStringToConcatenate);`

- Third argument specifies how much (in numerical character length) of the second string to concatenate to the first
- Second argument pointer name is used to point to first character of second argument string so using parenthesis arithmetic can be done e.g. `firstString, (secondStringToAddToFirstString + 3), length;`
- firstString array must be large enough to accommodate all concatenated strings to avoid error