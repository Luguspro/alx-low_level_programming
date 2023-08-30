#include "lists.h"

/**
* sum_listint - calculate sum of all the data in a listint_t list
* @head: node that appear first in the linked list
*
* Return: sum(success)
*/

int sum_listint(listint_t *head)
{
	int sumation = 0;
	listint_t *temp = head;

while (temp)
{
sumation += temp->n;
temp = temp->next;
}
return (sumation);
}
