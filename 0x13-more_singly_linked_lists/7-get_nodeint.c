#include "lists.h"

/**
* get_nodeint_at_index - func computes node at a certain
* index in a linked list
* @head: node that appears first in the linked list
* @index: index of the node to return
*
* Return: the nth node of a listint_t linked list, NULL
* if node does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;
	listint_t *temp = head;

for (a = 0; (temp && a < index); a++)
{
	temp = temp->next;
}
return (temp ? temp : NULL);
}

