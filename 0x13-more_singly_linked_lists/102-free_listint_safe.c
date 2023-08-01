#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely (can handle loops).
 * @h: Double pointer to the first node in the linked list.
 *
 * Return: Number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t len = 0;
    listint_t *current, *temp;

    if (!h || !*h)
        return (0);

    while (*h != NULL)
    {
        current = *h;
        *h = (*h)->next;

        if (current <= *h)
        {
            len++;
            free(current);
            if (current == *h)
                break;
        }
        else
        {
            free(current);
            break;
        }
    }

    *h = NULL;
    return (len);
}
