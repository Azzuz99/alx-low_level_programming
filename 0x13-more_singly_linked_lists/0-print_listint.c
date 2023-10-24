#include "lists.h"
/**
 * print_listint - print the int data in singly linked list
 *
 * @h: the head pointer to the list
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
