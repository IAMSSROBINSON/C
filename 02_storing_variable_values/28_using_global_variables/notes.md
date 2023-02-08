# Using global variables 

Variable scope: The extent to which a variable is accessible within a program.

<br>

## Local and Global variables
<br>

### Local:
Local variables: Variables declared within a function

* Only accessible from within the function in which they were declared (implicit default behavior. Can be explicitly applied with `auto` keyword at declaration).

```C
#include <stdio.h>

int main () {

  auto char multiChar[] = "autoThisFunctionOnly";
  printf("%s\n", multiChar);

  return 0;
}
// > autoThisFunctionOnly
```

<br>

### Global:
Global variables: Variables declared outside of a function block.

* Declared at the start of a program - it can be accessed from any function within the program and remains in existence until the program ends.
  
* An external global variable (a variable declared and initialized in an external file) is to be declared at the start of each function that requires it using the `extern` keyword to distinguish it from local variables.

```C
// externalFile.c
extern int externalVariable = 100;


// mainProgram.c
#include <stdio.h>

int main () {

  // declare external variable in function it is to be used:
  extern int externalVariable;
  printf("%d\n", externalVariable);
  
  return 0;
}

// compile: mainProgram.c and externalFile.c as 1 executable program
  // gcc mainProgram.c externalFile.c -o nameOfExecutableProgram.exe
// run the executable: ./nameOfExecutableProgram.exe
// nameOfExecutableProgram will print: 
  // > 100
```
<br>

### Limiting scope

Using the `static` keyword at declaration can limit the accessibility and availability of a global variable and or function to the file in which they were created. 

```C
// static global variable accessible / confined to this program but available to all functions inside it:
static int staticVariable = 1000;

int main () {

  printf("%d\n", staticVariable);

  return 0;
}
// > 1000
```

* A program cannot have more than one variable with the same name unless it is prefixed with the `static` keyword. 
  
* Local variables can also be declared as `static` denoting as usual that they are only accessible within the function in which they were declared but they do not disappear when the functions ends they are stored until the program ends.