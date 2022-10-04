// reversing a linked list (iterative method)

#include <stdio.h>
#include <stdlib.h>

// defining the node of a linked list
typedef struct Node {
    int data;
    struct Node * next;
}node;

// head can be accessed anywhere
node *head;

// print the whole linked list in one go
void print(node *head)
{
    node *p = head;
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// insert an element into linked list at
// the beginning
void insert(int data)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->next = head;
    head = temp;
}

void reverse(node *ele)
{
    node *prev = head;
    node *next = NULL;
    node *p = head;
    while(p != NULL)
    {
        next = p->next;
        p->next = prev;
        prev = p;
        p = next;
    }
}

int main(void)
{    
    insert(1);
    insert(2);
    insert(3);

    print(head);
    reverse(head);
    print(head);
}