#include <stdlib.h>
#include "lists.h"
/**
  * free_list - Frees a linked list (DSA).
  * @head: The pointer to the first node of linked list given.
  *
  * Return: Nothing, abs.
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
