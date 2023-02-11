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

- The string being added(the second argument) begins at position 0 of that string and ends at the position of the third argument BUT because the name of the char array also acts as a pointer to the first element/character arithmetic can be done to alter the starting position
- firstString array must still be large enough to accommodate all concatenated strings to avoid error