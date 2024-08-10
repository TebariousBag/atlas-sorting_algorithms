#include "sort.h"

/**
 * insertion_sort_list - sorts list of ints
 * @list: doubly linked list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *ptr;
	listint_t *tmp;

	if (!list)	/*if null*/
	{
		return;
	}

	while (ptr)
	{
		ptr = ptr->next; /*start at 2nd element*/
		while (ptr && ptr->next && (ptr->n > ptr->next->n)) /*compare nodes*/
		{
			tmp = ptr->next; /* store the next node*/
			ptr->next = tmp->next;
			tmp->prev = ptr->prev;

			if (ptr->prev)	/*update prev*/
			{
				ptr->prev->next = tmp;
			}
			if (tmp->next)	/*update next*/
			{
				tmp->next->prev = ptr;
			}

			ptr->prev = tmp;	/*swap nodes*/
			tmp->next = ptr;

			if (tmp->prev)	/*move head ptr*/
			{
				ptr = tmp->prev;
			}
			else
			{
				*list = tmp;	/*update head*/
			}

			print_list(*list);
		}
	}
}
