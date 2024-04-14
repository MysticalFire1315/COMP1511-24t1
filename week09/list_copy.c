// COMP1511 24T1 Tutorial 09 - list_copy.c
//
// Given a linked list, make a copy of the list and free
// the old list and return the new head of the list.

struct node *list_copy(struct node *head) {
    if (head == NULL) {
        return head;
    }

    struct node *current = head;
    struct node *new_head = NULL;
    struct node *new_tail = NULL;
    struct node *temp;

    while (current != NULL) {
        temp = malloc(sizeof(struct node));
        temp->data = current->data;
        temp->next = NULL;

        if (new_head == NULL) {
            new_head = temp;
            new_tail = temp;
        } else {
            new_tail->next = temp;
            new_tail = temp;
        }

        current = current->next;
    }

    current = head;
    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }

    return new_head;
}
