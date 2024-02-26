#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

// Traverse the linked list
void display(struct node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->link;
    }
}

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // first Node
    head->data = 5;
    head->link = first;
    // second node
    first->data = 6;
    first->link = second;
    // third node
    second->data = 7;
    second->link = third;
    // fourth node
    third->data = 8;
    third->link = NULL;

    //  traversal in linked list
    display(head);
    return 0;
}