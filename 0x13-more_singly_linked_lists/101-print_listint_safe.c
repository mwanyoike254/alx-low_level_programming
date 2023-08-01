#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current = head;
    const listint_t *loop_start = NULL;
    size_t index = 0;

    while (current != NULL)
    {
        printf("[%p] %d\n", (void *)current, current->n);

        if (current > current->next || current->next == loop_start)
            break;

        current = current->next;

        if (current == head)
        {
            if (loop_start == NULL)
                loop_start = current;
            else
                break;
        }

        index++;
    }

    if (current != NULL && current->next != NULL)
        printf("-> [%p] %d\n", (void *)current->next, current->next->n);

    return index;
}
