#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n, k = 0;
    printf("enter size of SPARSE matrix:\t");
    scanf("%d", &n);
    int m = n*(n+1)*0.5;
    int a[m];
    for(int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            k = j*(j+1)*0.5 + i;
            printf("%d, %d :%d= ", i, j, k);
            scanf("%d", &a[k]);
        }
    }
    printf("\nthe matrix is:\n");
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(j<=i){
                k = i*(i+1)*0.5 + j;
                printf("%d ", a[k]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}