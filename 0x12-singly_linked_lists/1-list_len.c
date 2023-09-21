#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked `list_t` list
 * @h: head of linked list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
unsigned int count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
