#include <stdio.h>
int main() {
  int num;
  int prime=0;
  scanf("%d",&num);
  for(int i=2; i<num; i++){
      if (num%i==0){
          prime=1;
      }
  }
  if(prime==1){
      printf("%d is not a prime number!\n", num);
  }
  else{
      printf("%d is a prime number!\n", num);
  }
}