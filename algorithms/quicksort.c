// Quick Sort: C supports quicksort with stdlib (standard library)
#include <stdio.h>
#include <stdlib.h>
int compfunc(const void * a, const void * b){
    return (* (int*)a- *(int*)b);
}
int main(){
    int arr[4]={2,4,3,1};
    qsort(arr,sizeof(arr)/sizeof(arr[0]),sizeof arr[0],compfunc);
    for (int k =0; k<4;k++){
        printf("%d ",arr[k]);
    }
    return 1;
}