#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter and
 * updates the value it points to to 98.
 * @n: pointer to the variable to update
 */
void reset_to_98(int *n)
{
	*n = 98;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
