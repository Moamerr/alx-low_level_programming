#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to list
 * Return: number of elemnts in alinked list
 */
size_t list_len(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
