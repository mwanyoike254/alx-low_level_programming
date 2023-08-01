#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index in a linked list.
 * @head: Pointer to the first node in the linked list.
 * @index: Index of the node to return.
 *
 * Return: Pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;
    listint_t *temp = head;

    for (i = 0; temp != NULL && i < index; i++)
        temp = temp->next;

    return (temp);
}
