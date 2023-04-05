#include "lists.h"

/**
 * listint_length - returns the number of nodes in a linked list of integers
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t listint_length(const listint_t *head)
{
	/* Initialize a variable to count the number of nodes */
	size_t node_count = 0;

	/* Traverse the linked list until the end is reached */
	while (head != NULL)
	{
		/* Increment the node count for each node encountered */
		node_count++;

		/* Update the pointer to the next node */
		head = head->next;
	}

	/* Return the total number of nodes in the linked list */
	return (node_count);
}
