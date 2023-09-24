#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                      in ascending order using Insertion sort algorithm.
 * @list: Pointer to the head of the doubly linked list.
 */

void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint curr, tmp, prev;

	curr = (*list)->next;

	while curr != NULL
	{
		tmp = curr;
		prev = curr->prev;

		while (prev != NULL && tmp->n < prev->n)
		{
			if (tmp->next != NULL)
				tmp->next->prev = prev;

			prev->next = tmp->next;
			tmp->prev = prev->prev;
			prev->prev = tmp;
			tmp->next = prev;

			if (tmp->prev != NULL)
				tmp->prev->next = tmp;
			else
				*list = tmp;

			print_list(*list);
			prev = tmp->prev
		}

		curr = curr->next;
	}

}
