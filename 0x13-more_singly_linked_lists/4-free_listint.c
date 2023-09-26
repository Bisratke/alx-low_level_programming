#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: Pointer to a struct
 */
void free_listint(listint_t *head)
{
listint_t *t;
while (head)
{
t = head->next;
free(head);
head = t;
}
}
