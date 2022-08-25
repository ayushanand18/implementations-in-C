#include <stdio.h>

int main(void){
    int n1, n2;
    printf("enter size of two arrays:\t");
    scanf("%d%d", &n1, &n2);
    int a1[n1], a2[n2];
    
    printf("enter %d elements of 1st array:\t", n1);
    for(int i=0; i<n1; i++){
        scanf("%d", &a1[i]);
    }
    printf("enter %d elements of 2nd array:\t", n2);
    for(int i=0; i<n2; i++){
        scanf("%d", &a2[i]);
    }
    int a[n1+n2]; // the merged array
    // merging the arrays
    for(int i=0; i<n1+n2; i++){
        if(i>=n1){
            a[i] = a2[i-n1]; 
        }
        else{
            a[i] = a1[i];
        }
    }
    // bubble sort
    int swap; // for swapping we need a temp variable
    for(int i=n1+n2-1;i>0;i--){
        for(int j=0; j<i; j++){
            if(a[j]>a[j+1]){ // if the preceding element is greater than the succeeding element
                swap = a[j];    // then we swap them, so that we get the largest element at the end
                a[j] = a[j+1];
                a[j+1]=swap;
            }
        }
    }

    printf("merged and sorted array is:\t");
    for(int i=0; i<n1+n2; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}