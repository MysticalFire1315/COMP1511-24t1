// COMP1511 24T1 Tutorial 09 - list_delete_smallest.c
//
// Given a linked list, remove the node with the smallest
// value from the linked list and return the new head of
// the list.

struct node *list_delete_smallest(struct node *head) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    }

    struct node *current = head;
    struct node *smallest_prev = NULL,;
    struct node *prev = NULL;

    int smallest_data = head->data;

    while (current->next != NULL) {
        if (current->next->data < smallest_data) {
            smallest_data = current->next->data;
            smallest_prev = current;
        }
        current = current->next;
    }

    if (smallest_prev == NULL) {
        current = head;
        head = head->next;
    } else {
        current = smallest_prev->next;
        smallest_prev->next = current->next;
    }

    free(current);
    return head;
}
