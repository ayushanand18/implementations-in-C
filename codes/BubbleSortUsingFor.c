// bubble sort
#include <stdio.h>
void main()
{
    int a[7]={10,40,30,4,20,78,1};
    int c;
    for (int j=6; j>0;j--){
        for (int i=0;i<j;i++){
            if(a[i]>a[i+1]){
                c = a[i+1];
                a[i+1]=a[i];
                a[i]=c;
            }
        }
    }
    for(int k=0;k<7;k++){
        printf("%d, ",a[k]);
    }
    printf("\n");
}