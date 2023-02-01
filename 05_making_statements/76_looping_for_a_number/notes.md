# Looping for a number

A piece of code that auto-repeats is called a 'loop'. 
A cycle of the execution of statements within a loop is called an 'iteration / pass'. 
The length of loop (amount of iterations until the end) is controlled by a conditional test made from within the loop declaration and while this test expression continues to be true the loop will continue to iterate on until the condition evaluates to false. 

<br>

## Types of loop

<br>

- For loop
- While loop
- Do while loop	
  
<br>

### Syntax

```C
// for loop syntax:

for(initializer; text-expression, increment/decrement){
	// Statements to be executed while test-expression is still true;
}
```

<br>

## Breaking down the loop syntax

- Keyword: The loop keyword `for` (or otherwise) is used to illustrate the start of a loop sequence.

- Initializer: An `int` variable typically name `i` is used to set a starting counter value of the number of iterations made by the loop.

- Test-expression: On each iteration the test-expression is evaluated and that iteration and the statements-to-be-executed are only continued with while the condition evaluates to true until it becomes false e.g. `i < 100;`

- Increment `++` / decrement `--` operator: With each passing iteration the counter can increase or decrease depending on whether an increment operator or decrement operator is used. This is how the truthiness of the condition is controlled and eventually can evaluate to becoming false.

### Syntax

```C
// for loop syntax:
for(int i = 0; i <= 100; i++){
	printf("%d\n", i); 
	
	// will print the value of i on a new line on each iteration of the loop, while the value of i is less than or equal to 100, as the value of i increases on each iteration from a starting point of 0.
}
```

<br>

## Nesting loops

Loops can be nested within each other which would allow execution of all iterations of an inner nested loop for each iteration of the outer loop. 