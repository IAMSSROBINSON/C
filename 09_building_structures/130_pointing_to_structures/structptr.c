#include <stdio.h>

// declare unamed struct data-type with 2 char pointer members and a tagName
typedef struct {
	char *name; 
	char *population;
} City;


int main () {

	// declare 3 regular variables and pointer variable all of struct data-type
	City nyc, prs, ldn, *ptr;

	// assign values to members of first variable
	// display values
	nyc.name = "New York City";
	nyc.population = "8.468m";
	printf("\n%s, Population: %s\n",nyc.name, nyc.population );

	// assign address of second variable to pointer variable
	ptr = &prs;

	// assign values to members of second variable and display using -> to store & . to retrieve
	ptr->name = "Paris";
	ptr->population = "2.161m";
	printf("\n%s, Population: %s\n", prs.name, prs.population);

	// assign address of third variable to pointer variable
	ptr = &ldn;

	// assign values to members of third variable and display using -> operator & display
	ptr->name = "London";
	ptr->population = "8.982m";
	printf("\n%s, Population: %s\n", ptr->name, ptr->population);








	return 0;
}