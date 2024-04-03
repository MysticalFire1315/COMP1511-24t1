// COMP1511 24T1 Tutorial 08 - ll_diagram.c
//
// This code accompanies the pseudocode for the tutorial
// activity Part 2: Diagramming Linked Lists

struct node {
    int data;
    struct node *next;
};


int main(void) {
    struct node *n1 = malloc(sizeof(struct node));
    n1->data = 3;
    n1->next = NULL;

    struct node *head = n1;

    struct node *n2 = malloc(sizeof(struct node));
    n2->data = 9;
    n2->next = NULL;

    n1->next = n2;

    struct node *n3 = malloc(sizeof(struct node));
    n3->data = 5;
    n3->next = NULL;

    n3->next = head;
    head = n3;

    return 0;
}
