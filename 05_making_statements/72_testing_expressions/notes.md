# Testing expressions

The `if` keyword is the beginning of an conditional expression written between parenthesis that should evaluate to a boolean true or false value. If the expression evaluates to true then the following statement block written in curly braces can be executed (multiple statements may be executed): 

### Syntax:

```C
if (test expression) {
	statements to be executed when true;
	}
```

In C a boolean expression of true evaluates to a numerical value of 1 and false evaluates to 0. The expression `(5 > 1) is the equivalent of (5 > 1 == 1)`.

<br>

## Evaluating multiple expressions

It may be desireable to evaluate more than 1 expression to determine whether the statements thereafter should be executed:

<br>

### Logical && (AND) operator

The logical && (AND) operator helps acheive this by requiring that both expressions must evaluate to true for the following statement/s to be executed: 

### Syntax:

```C
if (test expression) && (test expression) {
	statements to be executed;
	}
```

<br>

### Nested if statements

If statements can also be nested with one inside another to ensure that certain statements are only executed if the preceding expression evaluated to true:

### Syntax:

```C
if (test expression) {
	if (test expression) {
		statements to be executed when true;
	}
}
```

<br>

When one or more expressions evaluate to false within an if test statement the following statements to be executed will not be executed and the program will resume with the code thereafter. 

<br>

### else statements

An `else` statement can be used to extend an if statement to provide an alternative option for statements to be executed should the `if` conditional statement evaluate to false. This is known as 'conditional branching' and is a fundamental programming technique that allows the program to follow one of two directions to proceed with depending on the result of the evaluation:  

### Syntax:

```C
if (test expression) {
 statements to be executed when true;
}
else {
	statements to be executed when false;
}
```


