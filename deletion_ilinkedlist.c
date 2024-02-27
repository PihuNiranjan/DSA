#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node *deleteformstart(struct node *head)
{
    struct node *ptr;
    ptr = head;
    head = head->link;
    free(ptr);
}

struct node *deletingNodeinbetween(struct node *head, int index)
{
    printf("\nLinked list after the operation deletingnodeinbetween -> ");
    struct node *p = head;
    struct node *q = p->link;

    for (int i = 0; i < index - 1; i++)
    {
        p = p->link;
        q = q->link;
    }
    p->link = q->link;
    free(q);

    return head;
}

// struct node *deletingNodeinbetween(struct node *head, int index)
// {
//     struct node *p = head;

//     for (int i = 0; i < index -1; i++)
//     {
//         p = p->link;

//     }
//     struct node *q ;
//     q=p->link;
//     p->link = q->link;
//     free(q);

//     return head;
// }

struct node *deletingNodeatend(struct node *head)
{   
    printf("\n Linked list after operation of deletingNodeatend ->");
    struct node *p = head;
    while (p->link->link != NULL)
    {
        p = p->link;
    }
    struct node *temp = p->link;
    p->link = NULL;
    free(temp);
    return head;
}



void display(struct node *ptr)
{
    while (ptr->link != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}
int main()
{
    struct node *node1 = malloc(sizeof(struct node));
    struct node *node2 = malloc(sizeof(struct node));
    struct node *node3 = malloc(sizeof(struct node));
    struct node *node4 = malloc(sizeof(struct node));
    struct node *node5 = malloc(sizeof(struct node));

    node1->data = 10;
    node1->link = node2;
    node2->data = 20;
    node2->link = node3;
    node3->data = 30;
    node3->link = node4;
    node4->data = 40;
    node4->link = node5;
    node5->data = 50;
    node5->link = NULL;

    printf("\nOriginal Linked list -> ");
    display(node1);

    // CASE 1: Deleting the node from start
    // display(deleteformstart(node1));

    // CASE 2: Deleting a node of index i
    // display(deletingNodeinbetween(node1, 1));

    // CASE 3: Deleting node at end
    display(deletingNodeatend(node1));

    return 0;
}