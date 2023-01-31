# Branching switches

Switch statements can replace multiple if else statements when the text expression evaluates a single condition.

<br>

## Switch statements

Switch statements start with the `switch()` keyword and takes a given value as an argument. This argument then seeks to be matched by a number of `case` statements and is followed by code to be executed should be arguments value be matched by the case in question - however no two cases can try to match the same value:

### Syntax

```C
switch(test-value){
	case match-value :
		statement-to-execute-when-matched;
		break;
	case match-value :
		statement-to-execute-when-matched;
		statement-to-execute-when-matched;
		break;
	default: 
		statement-to-execute-when-no-matches-from-above-cases	;
}
```

<br>

## Break statement

Each `case` statement must end with a `break;` statement to signify that the program should exit the switch statement block when that `case` has matched the argument value and that no other case or accompanying statements should be executed afterwards unless that is the desired outcome. 

<br>

## Multiple case options - same output

If a number of match-values are to each execute the same statements then only the final `case` statement need include the statements to be executed and the `break;` statement.

A `default` statement can also be added to the end to be executed in the event that no cases are matched - it is not compulsory for the `swtich` statement to run properly and does not require a `break;` statement at the end:

### Syntax

```C
switch(){
	case 0:
	case 1:
	case 2:
		printf("Less than 3\n");
		break;
	case 3: 
		printf("Exactly 3\n");
		break;
	default: 
		printf("Greater than 3 or less than zero\n");
}
```

