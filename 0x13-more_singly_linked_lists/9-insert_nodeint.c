#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a linked list at a given position.
 * @head: Double pointer to the first node in the list.
 * @idx: Index where the new node is added.
 * @n: Data to insert in the new node.
 *
 * Return: Pointer to the new node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    listint_t *new_node, *temp;

    if (!head)
        return (NULL);

    new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    temp = *head;
    for (i = 0; temp && i < idx - 1; i++)
        temp = temp->next;

    if (i == idx - 1)
    {
        new_node->next = temp->next;
        temp->next = new_node;
        return (new_node);
    }
    else
    {
        free(new_node);
        return (NULL);
    }
}
