#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @head: pointer to the head of the linked list to print
 *
 * Return: the number of nodes in the linked list
 */
size_t print_listint(const listint_t *head)
{
    size_t node_count = 0; // Counter for the number of nodes in the list

    // Traverse the linked list and print each node's value
    while (head)
    {
        printf("%d\n", head->n);
        node_count++;
        head = head->next;
    }

    return (node_count); // Return the number of nodes in the list
}
