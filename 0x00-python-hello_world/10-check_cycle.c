#include "lists.h"
/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to the singly linked list to be checked
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
listint_t *last, *first;
if (list == NULL || list->next == NULL)
return (0);
last = list->next;
first = list->next->next;

while (last != NULL && first != NULL && first->next != NULL)
{
if (last == first)
return (1);
last = last->next;
first = first->next->next;
}
return (0);
}

