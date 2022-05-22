// WAP to find minimum and maximum element from an array

#include <stdio.h>
int main(){
    int a[10]={10,20,30,40,10,74,15,8,45,34};
    int min=a[0], max=a[0];
    for (int j=0;j<10;j++){
        if (a[j]>max){
            max = a[j];
        }
        if (a[j]<min){
            min=a[j];
        }
    }
    printf("The maxmimum is %d and the minimum is %d\n",max,min);
    return 0;
}
