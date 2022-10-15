// a program to convert binary to decimal 

#include <stdio.h>
#include <math.h>

int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}

int main() {
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
  printf("The equivalent number in decimal is: %d",convert(n));
  return 0;
}

