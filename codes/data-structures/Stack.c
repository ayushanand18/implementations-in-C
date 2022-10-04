// implementation of stack data structure using array

#include <stdio.h>
int push(); // to insert new elements
int pop(); // to pop elements from top
void print(); // to print elements from top

int main(){
    // creating the stack of user-defined size
    int tos = -1;
    int size;
    printf("enter size of stack to create:\t");
    scanf("%d", &size);
    int stack[size];
    printf("succesfully created stack of size %d", size);

    // perform some operations
    tos = push(stack, tos, 1, size);
    tos = push(stack, tos, 2, size);
    tos = push(stack, tos, 3, size);
    print(stack, tos);
    tos = pop(stack, tos);
    print(stack, tos);

    return 0;
}

int push(int *a, int tos, int data, int size){
    if (tos == size){
        printf("stack full");
        return tos;
    }
    tos++;
    a[tos] = data;
    return tos;
}
int pop(int *a, int tos){
    if (tos==-1){
        printf("stack empty");
        return tos;
    }
    tos--;
    return tos;
}
void print(int *a, int tos){
    printf("\nstack is:\n tos->");
    for(int i=tos; i>=0; i--){
        printf("%d| ", a[i]);
    }
    printf("\n");
}