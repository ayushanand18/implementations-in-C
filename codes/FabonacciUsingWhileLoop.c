#include <stdio.h>
void main(){
  int a=0, b=1, c, n;
  scanf("%d",&n);

  while(n>0){
    int c=a+b;
    printf("%d ",a);
    a=b;
    b=c;
    --n;
  }
  
  printf("\n");
}