#include "lists.h"

/**
 * listint_len - counts the elements in a linked list
 * @h: The head of the linked list
 *
 * Return: The number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	
	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			num++;
		}
	}	

	return (num);
}

