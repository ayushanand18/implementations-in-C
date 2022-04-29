#include <stdio.h>
int main() {
  long int orig;
  long int num;
  int digit;
  scanf("%ld", &orig);
  num = 0;
  while (orig > 0) {
    digit = orig % 10;
    orig = orig / 10;
    num = num * 10 + digit;
  }
  printf("%ld\n", num);
}