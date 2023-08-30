#include "lists.h"

/**
* delete_nodeint_at_index - func delete a node in a linked
* list at a certain
* @head: pointer to the starting element of the list
* @index: index of the node to be deleted
*
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int a;

if (*head == NULL)
	return (-1);
if (index == 0)
{
	*head = (*head)->next;
	free(temp);
	return (1);
}
for (a = 0; a < (index - 1); a++)
{
	if (!temp || !(temp->next))
		return (-1);
	temp = temp->next;
}
current = temp->next;
temp->next = current->next;
free(current);
return (1);
}

