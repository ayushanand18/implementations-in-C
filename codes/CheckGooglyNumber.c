// Check Googly Number.
// A number whose number of digits is a multiple of sum of its digits.

#include <stdio.h>
int main() {
  long int n,d, sum=0, len=0;
  scanf("%ld",&n);
  while(n>0){
    d=n%10;
    n=n/10;
    sum+=d;
    len+=1;
  }
  if(len%sum==0)
      printf("YES\n");
  else
      printf("NO\n");
}