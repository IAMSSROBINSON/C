# Flagging bits

Bitwise operators are often used to manipulate a 'bit field' containing a set of boolean 'flags' and is more efficient than storing boolean flag values in separate variables. 

A 'char' data-type (with just one byte) can hold a 'bit field' of 8 flags (one per bit), whereas eight separate 'char' variables would require 8 bytes of memory.

<br>

## Setting bit flags

Initial bit flags are set by assigning a decimal value to the variable whose binary equivalent has 1 for each bit that is to be called "on" as a boolean flag e.g.

decimal: 8
binary equivalent: 1000
The forth flag is turned on reading from right-left (from least significant bit):

|Bit number		|8(MSB)	|7		  |6	  	|5	  	|4	  	|3	  	|2	  	|1(LSB) |
|:------------|:-----:|:-----:|:-----:|:-----:|:-----:|:-----:|:-----:|:-----:|
|Decimal			|128		|64			|32			|16			|8			|4			|2			|1			|
|Binary				|0			|0			|0			|0			|1			|0			|0			|0			|		

<br>

The bit flag values can be reversed using the bitwise ~(NOT) operator but the zeros(0s) must first be masked before the bit flag otherwise they will each return a 1 in place.

To reverse a bit field of four flags on the 4 bits on the right side of a byte - the left most bits must be masked.
