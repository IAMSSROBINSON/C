# Installing a c compiler

C programs are written as plain text files saved with a '.c' file extension.  

<br>

## Program execution

The program must first be 'compiled' - converted into machine code / lower level form that the computer can understand e.g. byte code.

The compiler:

- reads the text code the program is written in
- translates the text into a second file which is machine readable and executable byte format
- if the text program contains any C syntax errors the second executable file will not be built and the compiler will report an error. 

<br>

## GCC (GNU C Compiler) 

Included in most Linux operating systems is the most popular compiler of C programs - The GNU C Compiler (available under the General Public License (GPL) to use for free).

Running the command `gcc -v` in a terminal will determine the version of GNU C Compiler installed and will reveal the path to where on the system it is located.
