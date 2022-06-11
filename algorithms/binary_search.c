// ALGORITHM: Binary Search Algorithm
//           Searching an element in array by dividing the search in two parts every step
// Time Complexity O(log n)
// Pre-requisite: Array must be sorted
#include <stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10}; // the array we need to search an element in
    int toSearch = 6; // the number we need to search
    int low = 0; // we'll start with 0
    int high = 9; // n-1
    int mid; // middle number
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==toSearch){
            printf("%d is at position %d\n",toSearch,mid);
            break;
        }
        if(toSearch<arr[mid]){
            high=mid;
        }
        else{
            low=mid;
        }
    }
    return 1;
}