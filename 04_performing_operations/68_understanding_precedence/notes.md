# Understanding precedence

The order of evaluation of expressions as determined by the hierarchy of the operators.

```C
// The order of precedence determines if the addition or multiplication is performed first:
a = 6 + b * 3;	// * has higher precedence than + so: b * 3 is completed before: 6 + (b * 3)
```

<br>

The higher up the table the higher the level of hierarchy of precedence over the lower level operators.
Operators on the same row have the same equal precedence and then the associativity direction determines order of completion e.g. Left to right meand left gets completed first:

<br>

|Operator													|Associativity / Completion direction			|
|:--------------------------------|:------------------|
|()Function call, []Array index, ->Struct pointer, Struct member | Left to right			|
|!NOT, ~Bitwise NOT, ++Increment, --Decrement, +Positive, sizeof, -Negative, *Pointer, &Addressof | Right to left			|
|*Multiply, /Divide, %Modulus			|Left to right 	|
|+Add, -Subtract									|Left to right 	|		
|<<Shift left, >>Shift right			|Left to right 	|
|<Less than, <=Less than or equal to, >Greater than, >=Greater than or equal to		|Left to right 	|
|==Equality, !=Inequality					|Left to right 	|
|&Bitwise AND											|Left to right 	|
|^Bitwise XOR											|Left to right 	|
|\|Bitwise OR											|Left to right 	|
|&&AND														|Left to right 	|
|\|\|OR														|Left to right 	|
|?:Conditional										|Right to left 	|
|= + -= *= /= /= %= &= ^= \|= <<= >>=Assignment operators		|Right to left 	| 
|,Comma														|Left to right 	|

<br>

