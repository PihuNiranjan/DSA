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

struct node *insertionbegin(struct node *head, int data)
{
    struct node *beginode = (struct node *)malloc(sizeof(struct node));
    beginode->data = data;
    beginode->link = head;
    return beginode;
}

struct node *insertatindex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->link;
        i++;
    }

    ptr->link = p->link;
    ptr->data = data;
    p->link = ptr;
    return head;
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

    // insertion at begin
    struct node *begin = insertionbegin(head, 45);

    // insertion at the end
    struct node *lastnode = (struct node *)malloc(sizeof(struct node));
    lastnode->data = 9;
    third->link = lastnode;
    lastnode->link = NULL;

    // insertion a middile or in between second or third node
    struct node *midnode = (struct node *)malloc(sizeof(struct node));
    second->link = midnode;
    midnode->data = 0;
    midnode->link = third;

    // insertion after given node
    // suppose the give node is second
    struct node *nodeaftersecond = (struct node *)malloc(sizeof(struct node));
    nodeaftersecond->link = second->link;
    nodeaftersecond->data = 10;
    second->link = nodeaftersecond;

    // insertion at particular index
    insertatindex(begin, 40, 6);

    //  traversal in linked list
    display(begin);
    return 0;
}