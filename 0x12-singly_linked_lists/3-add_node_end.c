#include "lists.h"
#include <string.h>

/**
 * add_node_end - add to end
 * @head: pointer to head
 * @str: input string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
unsigned int len;
list_t  *new, *ptr;
new = malloc(sizeof(list_t));
if (new)
{
for (len = 0; *(str + len); len++)
new->str = strdup(str);
if (new->str)
{
new->len = len;
new->next = NULL;
if (!*head)
{
*head = new;
return (new);
}
ptr = *head;
while (ptr->next)
ptr = ptr->next;
ptr->next = new;
return (new);
}
free(new);
return (NULL);
}
return (NULL);
}