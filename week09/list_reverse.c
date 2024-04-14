// COMP1511 24T1 Tutorial 09 - list_reverse.c
//
// Given a linked list, reverse the list and return the new
// head of the list.

struct node *list_reverse(struct node *head) {
    struct node *prev = NULL;
    struct node *current = head
    struct node *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}
