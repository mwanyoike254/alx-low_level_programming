#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Double pointer to the first element in the linked list.
 *
 * Return: The data inside the element that was deleted, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int data = 0;

    if (head != NULL && *head != NULL)
    {
        temp = (*head)->next;
        data = (*head)->n;
        free(*head);
        *head = temp;
    }

    return (data);
}
