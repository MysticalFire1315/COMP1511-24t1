// COMP1511 24T1 Tutorial 09 - list_count_occurences.c
//
// Given a linked list and a value, count the number of
// times that value appears in the linked list.

int list_count_occurrences(struct node *head, int data) {
    int count = 0;
    while (head != NULL) {
        if (head->data == data) {
            count++;
        }
        head = head->next;
    }
    return count;
}
