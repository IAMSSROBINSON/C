# Creating array variables

An array variable can store multiple items of data.  
Regular variables only store 1 item of data.

<br>

## Storage   

Array elements (items inside the array) are stored sequentially at an index number with the first element occupying index number starting at 0 and the next element at index number 1 and so on.

<br>

## Declaration  

Array variables are declared with the data-type of the elements in the array followed by the name of the array and then the number of elements contained in the array:

### Syntax:  

data-type-Of-Array nameOfArray[NumberOfElementsInsideE.g.2];

```C
// example of declaring an array:
int arr[4];
```

<br>

## Initialization

An array can be initialized when it is declared by assigning values to the array elements that are separated by a comma and enclosed within curly braces:

```C
int arr[4] = {1, 2, 3, 4}; 
```
The number of elements in the array inside the square brackets can be left empty if the elements are being initialized at the time of declaration and the array size will adjust itself according.

<br>

## Referencing element values

Array element values are referenced using bracket notation whereby the array name is stated and next to it square brackets are placed along with the index number of the array element in question:

```C
// Array is declared and initialized
int arr[4] = {1, 2, 3, 4}; 

// To access the first array element value
arr[0]; // > 1
```

<br>

## Storing Text

Arrays can store strings(more than one character) of text.  
Each element in an array of `char` data-type can store a single character. 

### Null character escape \0 

Adding a null character escape sequence to the last element of the array converts the array to a string status:

```C
char str[4] = {'C', 'a', 't', '\0'};
```
This allows the entire string to be referenced using the name of the array and uses the format specifier `%s`.

<br>

## Referencing values

```C
#include <stdio.h>

int main () {
	int arr[3];

	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 300;

	char text[14] = {'C',' ','P','r','o','g','r','a','m','m','i','n','g','\0'};

	printf("First element value: %d\n", arr[0]); // > First element value: 100
	printf("Second element value: %d\n", arr[1]); // > Second element value: 200
	printf("Third element value: %d\n", arr[2]); // > Third element value: 300
	printf("String value: %s\n", text); // > String value: C Programming
	return 0;
}
```