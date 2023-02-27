# Reporting errors

<br>

## `perror();`

- `perror();` function
- from `<stdio.h>` header file
- prints descriptive error messaes
- require a "string" as its argument
- returns colon with description of current error

<br>

## `<errno.h>`

- `<errno.h>` header file
- defines integer expression "errno" that is assigned an error code when an errors occur. There are a range of codes that correspond to different types of error as the amount is different depending on what system you are running (Linux has more than Windows).

<br>

## `strerror();`

- `strerror();` function
- requires error code as its argument
- from `<string.h>` header file
- outputs error message associated to error code provided