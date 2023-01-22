# Comparing bit values

A bit is either a 0 or a 1.
There are 8 bits in 1 byte.
A full byte can store a binary number representing a decimal value from 0 to 255.

Each bit contributes a decimal component only when the bit contains a 1.
Components are designated from right to left from the 'LSB' Least Significant Bit to the right the 'MSB' Most Significant Bit.

<br>

|Bit number		|8(MSB)	|7		  |6	  	|5	  	|4	  	|3	  	|2	  	|1(LSB) |
|:------------|:-----:|:-----:|:-----:|:-----:|:-----:|:-----:|:-----:|:-----:|
|Decimal			|128		|64			|32			|16			|8			|4			|2			|1			|
|Binary				|0			|0			|1			|1			|0			|0			|1			|0			|			

(The binary number: 00110010 in the 8bit pattern above represents the decimal 50).

<br>

## Nibble

Half of a byte (4 bits) is known as a 'nibble'. 
The 'char' data-type is known for being a basic 1 byte storage unit and it is possible to manipulate individual parts of a byte using 'bitwise operators'.

<br>

## Bitwise operators

Bitwise operators are typically only used when programming for a device with limited resources.

<br>

|Operator		|Name		      |Binary number operation																					   |Example			      	|
|:---------:|:------------|:-------------------------------------------------------------------|:-------------------|
|\|					|OR						|Return a 1 in each bit where 'either' of two compared bits is a 1	 |1010 \| 0101 = 1111	|
|&					|AND					|Return a 1 in each bit where 'both of' two compared bits is a 1	 	 |1010 & 1100 = 1000	|
|~					|NOT					|Return a 1 in each bit where 'neither' of two compared bits is a 1	 |1010 ~ 0011 = 0100	|
|^					|XOR					|Return a 1 in each bit where 'only one' of two compared bits is a 1 |1010 ^ 0100 = 1110	|
|<<					|SHIFT LEFT		|Move each bit that is a 1 a specified number of bits to the 'left'	 |0010 << 2 = 1000  	|
|>>					|SHIFT RIGHT	|Move each bit that is a 1 a specified number of bits to the 'right' |1000 >> 2 = 0010  	|

<br>

 Although rarely used bitwise operators can be useful in some cases e.g. the ^XOR (eXclusive OR) operator allows for exchanging values between two variables without the need for a third variable.