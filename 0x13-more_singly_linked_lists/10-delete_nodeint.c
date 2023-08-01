#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list at a certain index.
 * @head: Double pointer to the first element in the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp, *current;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        current = *head;
        *head = (*head)->next;
        free(current);
        return (1);
    }

    temp = *head;
    for (i = 0; i < index - 1; i++)
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
