# Looping while true

A `while` loop is best used until a certain condition is met and can be used instead of a `for` loop. A `while` loop also requires an initializer, test-expression and increment / decrement statement. 

<br>

### Breaking a while loop down

The initializer appears before the start of the loop block. 
The test-expression appears after the `while` keyword.
The increment / decrement statement appears inside curly braces along with statements-to-be-executed on each loop iteration as long as the test-expression evaluates to true. 


### Syntax:

```C
initializer
while (test-expression){
	statements-to-be-executed;
	increment / decrement statement;
}
```

<br>

## Do while loop

A `do while` loop is an alternative while loop that has the initializer first but executes the first iteration of a loop before checking the test-expression for the next loop iteration (this means a `do while` loop will always iterate at least once). 

The increment / decrement statement runs to push the loop into the test-expression which must then evaluate to true if the loop is to iterate and continue. (The loop body must change the result of the test-expression on its iteration for the expression to eventually evaluates to false and stop the loop otherwise an infinite loop will occur). 


### Syntax:

```C
initializer
do {
	statements-to-be-executed;
	increment / decrement statement;
}(test-expression);
```