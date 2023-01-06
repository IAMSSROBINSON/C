# Using global variables 

Variable scope: The extent to which a variable is accessibile within a program.

<br>

## Local and Global variables

Local variables: Variables declared within a function

* Only accessibile from within the function in which they were declared (implicit default behavior. Can be explicitly applied with `auto` keyword at declaration).

<br>

Global variables: Variables declared outside of a function block.

* Can be accessed from any function within the program.
* An external global variable is to be `defined` once at the start of a program. 
  * It must also be declared (not initialized) at the start of each function that requires it using the `extern` keyword to illustrate its referrence to an external variable rather than a local variable. 

<br>

### Limiting scope

Using the `static` keyword at declaration can limit the accessibility and availibility of a global variable and or function to the file in which they were created. 

* A program cannot have more than one variable with the same name unless it is prefixed with the `static` keyword. 
* Local variables can also be declared at `static` denoting as usual that they are only accessbile within the function in which they were declared but they do not dissapear when the functions ends they are stored until the program ends.