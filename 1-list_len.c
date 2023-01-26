#include "lists.h"

/**
 *  list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	const list_t *temp;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
































































