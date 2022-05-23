// WAP to find number of duplicates in an array

#include <stdio.h>
int main(){
    // inputing array
    int n,c;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // bubble sorting
    for (int j=n; j>0;j--){
        for (int i=0;i<j;i++){
            if(a[i]>a[i+1]){
                c = a[i+1];
                a[i+1]=a[i];
                a[i]=c;
            }
        }
    }
    // real masala
    int me = a[0];
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]!=me || i==0){
            me = a[i];
            for (int j=i+1;j<n;j++){
                if (a[j]==me){
                    cnt+=1;
                }
                else{
                    break;
                }
            }
        }
    }
    printf("The number of duplicate elements are: %d\n",cnt);
    // int cnt=0,k=0;
    // int me;
    // for(int i=0;i<n;i++){
    //     me = a[i];
    //     for (int j=i+1;j<n;j++){
    //         if(me==a[j]){
    //             cnt++; // one its finds a duplicate it will increment count.
    //             k=j;
    //         // now let us delete the elements which are found to be duplicate.
    //         // because a duplicate may also be checked twice during this loop, so better to remove it.
    //             while(k<n){  // actually we are not deleting it but just overwriting its value and 
    //                 a[k]=a[k+1]; // resetting the outer index of the array.
    //                 k++;
    //             }
    //             n--;
    //         }
    //     }
    //     for (int m=0;m<n;m++){
    //         printf("%d ", a[m]);
    //     }
    //     printf("\n");
    // }
    // printf("The number of duplicate elements are: %d\n",cnt);
    
    return 0;
}