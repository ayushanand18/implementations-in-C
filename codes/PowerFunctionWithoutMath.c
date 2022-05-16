// power function without math lib
#include <stdio.h>
int power(int a, int n){
    int k=1;
    while(n>0){
        k=k*a;
        n--;
    }
    return k;
}
void main()
{
    int a,n;
    scanf("%d %d", &a, &n);
    printf("%d", power(a,n));
    printf("\n");    
}