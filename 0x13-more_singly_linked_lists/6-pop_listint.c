#include "lists.h"

/**
* pop_listint - func delete the head node of a linked list
* @head: pointer to beginnig element of the linked list
*
* Return: head node’s data (n) or 0 if the list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

if (!head || !*head)
	return (0);
number = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (number);
}

