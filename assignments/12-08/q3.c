#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, sum;
    printf("enter size of the array:\t");
    scanf("%d", &n);
    int *p = malloc(n*sizeof(int));
    printf("enter %d elements one by one:\t", n);
    for(int i=0; i<n; i++){
        scanf("%d", p+i);
        sum += *(p+i);
    }
    
    // print the array
    printf("the array inputted is:\t");
    for(int i=0; i<n; i++){
        printf("%d ", *(p+i));
    }
    printf("\nsum is %d\n", sum);
}