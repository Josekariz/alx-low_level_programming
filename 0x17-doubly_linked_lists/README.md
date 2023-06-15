Sure! Here's a simple README for the task project:

# Doubly Linked List Operations

This project contains several functions to perform operations on a doubly linked list (`dlistint_t`). The provided functions include:

1. `size_t print_dlistint(const dlistint_t *h)`
   - Prints all the elements of the doubly linked list.
   - Returns the number of nodes in the list.

2. `size_t dlistint_len(const dlistint_t *h)`
   - Returns the number of elements in the doubly linked list.

3. `dlistint_t *add_dnodeint(dlistint_t **head, const int n)`
   - Adds a new node with the given value at the beginning of the doubly linked list.
   - Returns the address of the new element, or NULL if it fails.

4. `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)`
   - Adds a new node with the given value at the end of the doubly linked list.
   - Returns the address of the new element, or NULL if it fails.

5. `void free_dlistint(dlistint_t *head)`
   - Frees the memory allocated for the doubly linked list.

6. `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)`
   - Returns the nth node of the doubly linked list, where index is the position starting from 0.
   - If the node does not exist, it returns NULL.

7. `int sum_dlistint(dlistint_t *head)`
   - Returns the sum of all the data values (n) in the doubly linked list.
   - If the list is empty, it returns 0.

8. `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)`
   - Inserts a new node with the given value at the specified index in the doubly linked list.
   - Returns the address of the new node, or NULL if it fails.
   - If it is not possible to add the new node at the given index, it does not add the node and returns NULL.

9. `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)`
   - Deletes the node at the specified index in the doubly linked list.
   - Returns 1 if the deletion is successful, -1 if it fails.

Feel free to use these functions to perform various operations on doubly linked lists.