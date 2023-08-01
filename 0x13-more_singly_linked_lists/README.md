Here's a revised version of the README file:

```
C - More Singly Linked Lists 📁

This project contains C functions to work with singly linked lists.

Directory Structure:
- `Tests/` ✔️: Directory containing test files.

`lists.h`:
Header file containing prototypes for all the functions.

Data Structure:
- `struct listint_s`:
    - `int n`: Integer data stored in the node.
    - `struct listint_s *next`: Pointer to the next node.

Typedef:
- `typedef listint_t`: Alias for `struct listint_s`.

List of Files:
- `0-print_listint.c`:
    - Function: `size_t print_listint(const listint_t *h);`
    - Description: Prints all the elements of a `listint_t` linked list and returns the number of nodes.

- `1-listint_len.c`:
    - Function: `size_t listint_len(const listint_t *h);`
    - Description: Returns the number of elements in a `listint_t` linked list.

- `2-add_nodeint.c`:
    - Function: `listint_t *add_nodeint(listint_t **head, const int n);`
    - Description: Adds a new node with data `n` at the beginning of a `listint_t` linked list. Returns the address of the new element.

- `3-add_nodeint_end.c`:
    - Function: `listint_t *add_nodeint_end(listint_t **head, const int n);`
    - Description: Adds a new node with data `n` at the end of a `listint_t` linked list. Returns the address of the new element.

- `4-free_listint.c`:
    - Function: `void free_listint(listint_t *head);`
    - Description: Frees a `listint_t` linked list.

- `5-free_listint2.c`:
    - Function: `void free_listint2(listint_t **head);`
    - Description: Frees a `listint_t` linked list and sets the head to NULL.

- `6-pop_listint.c`:
    - Function: `int pop_listint(listint_t **head);`
    - Description: Deletes the head node of a `listint_t` linked list. If the list is empty, returns 0. Otherwise, returns the head node's data (n).

- `7-get_nodeint.c`:
    - Function: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
    - Description: Returns the node at a given index in a `listint_t` linked list. If the node does not exist, returns NULL.

- `8-sum_listint.c`:
    - Function: `int sum_listint(listint_t *head);`
    - Description: Returns the sum of all the data (n) in a `listint_t` linked list. If the list is empty, returns 0.

- `9-insert_nodeint.c`:
    - Function: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
    - Description: Inserts a new node with data `n` at a given index in a `listint_t` linked list. Returns the address of the new node. If the insertion is not possible, returns NULL.

- `10-delete_nodeint.c`:
    - Function: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
    - Description: Deletes the node at a given index in a `listint_t` linked list. If the deletion is successful, returns 1. If the deletion is not possible, returns -1.

- `100-reverse_listint.c`:
    - Function: `listint_t *reverse_listint(listint_t **head);`
    - Description: Reverses a `listint_t` linked list using a maximum of one loop and two variables. Returns a pointer to the first node of the reversed list.

- `101-print_listint_safe.c`:
    - Function: `size_t print_listint_safe(const listint_t *head);`
    - Description: Prints a `listint_t` linked list safely, handling lists containing loops. Returns the number of nodes in the list.

- `102-free_listint_safe.c`:
    - Function: `size_t free_listint_safe(listint_t **h);`
    - Description: Frees a `listint_t` linked list safely, handling lists containing loops. Returns the size of the list that was freed. Sets the head to NULL.

- `103-find_loop.c`:
    - Function: `listint_t *find_listint_loop(listint_t *head);`
    - Description: Finds the loop in a `listint_t` linked list using a maximum of two variables. If no loop is found, returns NULL. Otherwise, returns the address of the node where the loop starts.

Tasks 📃:
- Task 0: Print list
- Task 1: List length
- Task 2: Add node
- Task 3: Add node at the end
- Task 4: Free list
- Task 5: Free (set head to NULL)
- Task 6: Pop
- Task 7: Get node at index
- Task 8: Sum list
- Task 9: Insert node at index
- Task 10: Delete node at index
- Task 100: Reverse list
- Task 101: Print (safe version)
- Task 102: Free (safe version)
- Task 103: Find the loop
