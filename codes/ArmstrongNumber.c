#include <stdio.h>
int main() {
  int n;
  int cnt=0;
  int s=0;
  int d;
  int orig;
  scanf("%d",&n);
  orig = n;
  while(n>0){
    d=n%10;
    n=n/10;
    s=s + d*d*d;
  }
  if(s==orig){
      printf("It is armstrong number.\n");
  }
  else{
      printf("It is not armstrong number.\n");
  }
}