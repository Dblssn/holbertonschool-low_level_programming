#include "lists.h"
#include <stdlib.h>

/**
  *free_list - free list
  *@head: pointer to head
  */
void free_list(list_t *head)
{
	list_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;

		free(head->str);
		free(head);

		head = next_node;
	}
}
