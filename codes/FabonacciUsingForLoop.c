#include <stdio.h>
int cf(int a, int b){
    return a+b;
}
int main() {
    int a=0;
    int t=a;
    int b=1;
    int j;
    printf("Upto number: ");
    scanf("%d",&j);
    printf("%d %d", a,b);
    for (int i=0;i<j;i++){
        t=a;
        a=b;
        b=cf(t,b);
        printf(" %d",b);
    }
}