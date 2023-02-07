# Placing functions in headers

To better organize the code in programs a simplified structure should be applied. 

<br>

## Header files

- A custom header file is created in the same directory as the program file e.g. utils.h
- In the '.c' file containing the `main()` function (placed under the `#include <stdio.h>` directive at the start of a file) - Add a `#include` preprocessor directive so the compiler automatically reads it first
- Name the custom header file in double quotes ""
- Inside the double quotes end with a ".h" file extension e.g. `#include "utils.h"`

