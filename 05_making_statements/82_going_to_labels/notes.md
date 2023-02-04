# Going to labels

The `goto` keyword is used in a program when you want it to jump to a label at some other point in the code (just like a hyperlink can on a webpage). 

A valid use of the `goto` keyword is to jump from within an inner nested loop to a label just after the end of its outer loop block immediately exiting both loops with no more iterations occuring. 

The `goto` statement will specify the label by name only and the label jumped to itself is terminated with a colon: (just like the label in a switch statement that uses case:).

<br>

## Example:

```C
int main () {

	// declare 2 int variables
	int i, j;
	int flag = 1;

	// use 2 nested loops to display the index values
	// add goto statement within loop to jump outside 
	for(int i = 1; i < 4; i++){
		for(int j = 1; j < 4; j++){
			if(i == 2 && j == 1){
				goto end;
			}
		printf("I = %d J = %d\n", i, j);
		}
	} end:


return 0;
}
```