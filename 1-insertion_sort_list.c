#include "sort.h"

/**
 * doubly_linked - A function that swaps two nodes
 * in a listint_t doubly-linked list
 * @h: Input
 * @n1: Input swap 1
 * @n2: Input swap 2
 */

void doubly_linked(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - A function that sorts a doubly linked list of integers
 * using the insertion sort algorithm.
 * @list: Input(Pointer)
 * Description: Prints the list after each swap
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)

	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			doubly_linked(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}
