#include <stdio.h>

int main(void) {
	int thing_var;		// define a variable for thing 
	int *thing_ptr;		// define a pointer to thing 

	thing_var = 2;		// assigning a value to thing
	(void)printf("Thing %d\n", thing_var);

	thing_ptr = &thing_var;	// make the pointer point to thing
	*thing_ptr = 3;			// thing_ptr points to thing_var so
							// thing_var change to 3
	(void)printf("Thing %d\n", thing_var);

	return 0;
}

