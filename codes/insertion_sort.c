#include <stdio.h>
void swap(int *x,int *y){
    *x = *x+*y;
    *y = *x-*y;
    *x = *x-*y;
}
int main(){
    int size;
    printf("Let's try insertion sort. Input the size of the array:\t");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Before Sorting Array is: \t");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(&arr[i+1],&arr[i]);
            for (int j=i;j>0;j--){
                if (arr[j]<arr[j-1]){
                    swap(&arr[j],&arr[j-1]);
                }
                else{
                    break;
                }
            }
        }
    }
    printf("\nAfter Insertion Sort, the array is: \t");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}