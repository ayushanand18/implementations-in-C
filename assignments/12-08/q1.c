#include <stdio.h>

void insert(int *array, int size, int ele, int pos);
void print_array(int *array, int size);

int main(void){
    int n, ele, pos;
    printf("enter size of array:\t");
    scanf("%d", &n);
    int arr[n+1];
    printf("now enter %d elements one by one:\t", n);
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("array is:\t");
    print_array(arr, n);
    printf("\nenter element to insert and position to insert at:\t");
    scanf("%d%d", &ele, &pos);
    insert(arr,n+1,ele,pos);
    print_array(arr, n+1);
}

void insert(int *array, int size, int ele, int pos){
    int i;
    for (i=size-1; i>pos; i--){
        array[i] = array[i-1];
    }
    array[i] = ele;
}
void print_array(int *array, int size){
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}