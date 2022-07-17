#include <stdio.h>
struct node{
  int data;
  struct node *next;
};
// a struct object has two things, one pointer object for the next struct and one data element
int main() {
  // we initialized the objects, our list has three elements, the one, two, and three nodes
  struct node *head;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;
  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));
  // initialize values
  one->data = 1;
  two->data = 2;
  three->data=3;
  // now connect the nodes, also save address of one in head
  head = one;
  one->next = two;
  two->next = three;
  three->next=NULL;
  // now if we want to just break the list between two and three
  struct node *new = NULL;
  new = malloc(sizeof(struct node));
  new->data = 4;
  two->next = new;
  new->next = three;
  
  // now trying to print all this crap
  struct node *p;
  p = head;
  while(p!=NULL){
    printf("%d ",p->data);
    p=p->next;
  }
  return 0;
}
  