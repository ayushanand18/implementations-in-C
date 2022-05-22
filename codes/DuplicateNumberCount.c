// WAP to find number of duplicates in an array

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cnt=0,k=0;
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                cnt++; // one its finds a duplicate it will increment count.
                k=j;
                n--; // now let us delete the elements which are found to be duplicate.
            // because a duplicate may also be checked twice during this loop, so better to remove it.
                while(k<n+1){  // actually we are not deleting it but just overwriting its value and 
                    a[k]=a[k+1]; // resetting the outer index of the array.
                    k++;
                }
            }
        }
    }
    printf("The number of duplicate elements are: %d\n",cnt);
    
    return 0;
}