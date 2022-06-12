// Bubble sort algorithm:
//      Sorts elements by shifting the largest/lowest to the end.
#include <stdio.h>
int main(){
    // we will be doing ascending sorting
    int array[7]={1,4,2,3,6,5,7}; // our array has say, 7 elements
    int swap; // for swapping we need a temp variable
    for(int i=6;i>0;i--){
        for(int j=0; j<i; j++){
            if(array[j]>array[j+1]){ // if the preceding element is greater than the succeeding element
                swap = array[j];    // then we swap them, so that we get the largest element at the end
                array[j]=array[j+1];
                array[j+1]=swap;
            }
        }
    }
    return 1;
}