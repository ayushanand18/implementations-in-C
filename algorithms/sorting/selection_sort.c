// Perform Selection Sort Technique on a user-defined array
// and print the sorted array

#include <stdio.h>

int main(){
    // get the array
    int n, min, temp;
    printf("enter size of the array:\t");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d data elements now:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", arr+i);
    }

    // perform selection sort
    // in the jth iteration the jth element is replaced
    // with the lowest item in A(j+1) ... A(n) list
    for(int j = 0; j<n; j++){
        // find the lowest -> A(min)
        min = j;
        for (int k = j; k<n; k++){
            if (arr[k]<arr[min])
                min = k;
        }
        // now swap with min
        temp = arr[min];
        arr[min] = arr[j];
        arr[j] = temp;
    }

    // now print the sorted array
    printf("\nthe sorted array is:\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}