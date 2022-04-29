// Check min and max of 3 numbers.

#include <stdio.h>
int main() {
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  int min=a, max=a;

  if(min>b)    min=b;
  if(min>c)    min=c;
  if(max<b)    max=b;
  if(max<c)    max=c;
  printf("min is %d. max is %d\n",min,max);
}