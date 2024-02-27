#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void display(struct node *ptr)
{
    struct node *q = ptr;
    do
    {
        printf(" %d ", q->data);
        q = q->next;
    } while (q != ptr);
}

void iscircularlinkedlist(struct node *ptr)
{
    struct node *q = ptr;
    while (1)
    {
        if (q != ptr)
        {
            q = q->next;
        }
        else
        {
            printf("\nthis is circular linked list ");
            break;
        }
    }
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));
    struct node *fourth = malloc(sizeof(struct node));
    struct node *fifth = malloc(sizeof(struct node));
    head->data = 5;
    second->data = 6;
    third->data = 7;
    fourth->data = 8;
    fifth->data = 9;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = head;


    display(head);
    iscircularlinkedlist(head);

    return 0;
}