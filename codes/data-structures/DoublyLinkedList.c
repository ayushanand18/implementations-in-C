#include <stdio.h>
#include <stdlib.h>
int main(){
    typedef struct DoublyLinkedList
    {
        int data;
        struct DoublyLinkedList *prev;
        struct DoublyLinkedList *next;
    }NODE;
    
    NODE *head, *one=NULL, *two=NULL, *three = NULL, *tail;
    // assign memory also
    one = malloc(sizeof(NODE));
    two = malloc(sizeof(NODE));
    three = malloc(sizeof(NODE));

    one->data = 1;
    two->data = 2;
    three->data = 3;
    head = one;
    tail = three;
    // forward connections
    one->next = two;
    two->next = three;
    three->next = NULL;

    // backward connections
    one->prev = NULL;
    two->prev = one;
    three->prev = two;
    
    NODE *p=head;
    printf("Forward first\t");
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    
    p = tail;
    printf("\nNow backward\t");
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p=p->prev;
    }

    // inserting in a doubly linked list after one
    NODE *new = malloc(sizeof(NODE));
    new->data = 4;
    new->prev=one;
    new->next=one->next;
    one->next=new;
    new->next->prev = new;
    
    printf("\nPrinting after insertion after one\n");
    p = head;
    printf("Forward first\t");
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    
    p = tail;
    printf("\nNow backward\t");
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p=p->prev;
    }

    printf("\nDeleting a node after new\n");
    new->next->next->prev = new;
    new->next = new->next->next;

    p = head;
    printf("Forward first\t");
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    
    p = tail;
    printf("\nNow backward\t");
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p=p->prev;
    }

    printf("\n");
}