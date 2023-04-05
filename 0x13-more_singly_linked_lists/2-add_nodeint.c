#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the pointer to the first node in the list
 * @data: integer data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int data)
{
	/* allocate memory for the new node */
	listint_t *new_node = malloc(sizeof(listint_t));

	/* check if memory allocation was successful */
	if (!new_node)
		return (NULL);

	/* set the data of the new node to the argument passed */
	new_node->n = data;

	/* set the next pointer of the new node to the current head of the linked list */
	new_node->next = *head;

	/* set the head of the linked list to the new node */
	*head = new_node;

	/* return the pointer to the new node */
	return (new_node);
}
