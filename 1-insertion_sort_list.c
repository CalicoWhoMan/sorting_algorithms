#include "sort.h"

/**
 * insertion_sort_list -  DLL in Insertion sorting algorithm
 * @list: list to be sorted
 * Return: void
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL;

		if (!list || !(*list) || !(*list)->next)
		return;

	tmp = (*list)->next;

	while (tmp)
	{
		while (tmp->prev && tmp->prev->n > tmp->n)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;
			if (!tmp->prev)
				*list = tmp;
			else
				tmp->prev->next = tmp;
			print_list(*list);
		}
		tmp = tmp->next;
	}
}
