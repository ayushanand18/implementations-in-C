// Linked List: All operations
// delete, insert
#include <stdio.h>
#include <stdlib.h>
int main(){
    typedef struct node{
        int data;
        struct node *next;
    }NODE;

    NODE *head, *one=NULL, *two=NULL, *three=NULL;
    // assign some memory
    one = malloc(sizeof(NODE));
    two = malloc(sizeof(NODE));
    three = malloc(sizeof(NODE));

    // put in data
    one->data = 1;
    two->data = 2;
    three->data = 3;

    // connect all nodes
    head = one;
    one->next = two;
    two->next = three;
    three->next=NULL;
    
    printf("\nThe original list:\t");
    NODE *p=head;
    while(p!=NULL){
        printf("%d ", p->data);
        p=p->next;
    }
    // now I will insert new after one
    NODE *new=NULL;
    new = malloc(sizeof(NODE));
    new->data = 4;
    new->next = one->next;
    one->next = new;

    printf("\nAfter inserting after one:\t");
    p=head;
    while(p!=NULL){
        printf("%d ", p->data);
        p=p->next;
    }

    // after inserting I wil now delete after new
    new->next = (*(new->next)).next;
    printf("\nAfter deleting after new:\t");
    p=head;
    while(p!=NULL){
        printf("%d ", p->data);
        p=p->next;
    }
    
    printf("\n");
}