#include <stdio.h>

// declare unnamed struct with tag and two members
typedef struct {
	char *name;
	int quantity;
} Item;	

// declare array of struct data-type and initialize each member of 3 structs
Item fruits[3] = {
	{"Apple", 10}, 
	{"Orange", 20}, 
	{"Pear", 30}
};

// add function prototype that will pass struct variable and a pointer variable to a struct as arguments
void display(Item value, Item *reference);


int main () {
	// call function and pass values
	display(fruits[0], &fruits[0]);
	
	
	return 0;
}


// define function and display value of arguments
void display (Item value, Item *reference) {

	// display values of passed in
	printf("%s: %d\n", value.name, value.quantity);

	// change values of struct member copies passed and display new values
	value.name = "Banana";
	value.quantity = 40;
	printf("%s: %d\n", value.name, value.quantity);

	// confirm original value are unchanged
	printf("%s: %d\n", fruits[0].name, fruits[0].quantity);

	// change original members and display
	reference->name = "Peach";
	reference->quantity = 50;
	printf("%s: %d\n", fruits[0].name, fruits[0].quantity);
}