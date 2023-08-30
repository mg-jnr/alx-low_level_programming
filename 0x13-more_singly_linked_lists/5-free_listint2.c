#include "lists.h"
/**
 * free_listint2 - frees a linked list, same as prev task.
 * @head: pointer to the listint_t list to be freed, same as prev task but quite different.
 */
void free_listint2(listint_t **head)
{
    listint_t *temp;

    if (head == NULL)
        return;

    while (*head)
    {
        temp = (*head)->next;
        free(*head);
        *head = temp;
    }

    *head = NULL;
}
