#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void display(struct node *ptr)
{
    while (ptr->next != NULL)
    {
        printf(" %d ", ptr->data);
        ptr = ptr->next;
    }
}

int search(struct node *ptr, int element)
{
    int i = 1;
    while (ptr->next != NULL)
    {
        if (ptr->data == element)
        {
            return i;
        }

        ptr = ptr->next;
        i++;
    }
    return -1;
}

void counting(struct node *ptr){
    int i = 0;
    while(ptr->next!=NULL){
        i=i+1;
        ptr = ptr->next;
    }
    printf("\nTotal number of nodes in linked list is %d",i);
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
    fifth->next = NULL;

    display(head);
    int element = 8, result = search(head, element);

    if (result == -1)
    {
        printf("elelment is absent \n");
    }
    else
    {
        printf("\nelement is present in linked list at node no. %d", result);
    }


counting(head);
    return 0;
}