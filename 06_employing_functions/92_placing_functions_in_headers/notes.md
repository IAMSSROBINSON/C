# Placing functions in headers

To better organize the code in programs a simplified structure should be applied. 

<br>

## Header files

A custom header file placed under the `#include <stdio.h>` directive at the start of a file with the 'main()' function can be created to contain the functions that are used often:

- Add a `#include` preprocessor directive so the compiler automatically reads it first
- Name the custom header file in double quotes ""
- Inside the double quotes end with a ".h" file extension e.g. `#include "nameOfHeaderFile.h"

