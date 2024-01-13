#include "sort.h"

/**
 * swap_nodes - Swaps two nodes in a doubly linked list
 * @list: The double pointer to the head of the list
 * @a: The first node
 * @b: The second node
 */

void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
	{
	if (node1 == NULL || node2 == NULL || list == NULL || *list == NULL) {
        return;
    }

    // If node1 is not the head of the list
    if (node1->prev != NULL) {
        node1->prev->next = node2;
    } else {
        // If node1 is the head, update the head to node2
        *list = node2;
    }

    // If node2 is not the tail of the list
    if (node2->next != NULL) {
        node2->next->prev = node1;
    }

    // Swap the next pointers of node1 and node2
    node1->next = node2->next;
    node2->next = node1;

    // Swap the prev pointers of node1 and node2
    listint_t *temp = node1->prev;
    node1->prev = node2;
    node2->prev = temp;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the Insertion Sort algorithm
 * @list: A double pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list) {
    listint_t *current, *temp;

    if (list == NULL || *list == NULL)
        return;

    current = (*list)->next;
    while (current != NULL) {
        temp = current;
        current = current->next;
        while (temp->prev != NULL && temp->n < temp->prev->n) {
            swap_nodes(list, temp->prev, temp);
            print_list(*list);
        }
    }
}
