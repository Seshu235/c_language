#include <stdio.h>

int gcd(int a, int b) {
  if (b == 0)
    return a; 
  return gcd(b, a % b);   
}

int lcm(int a, int b) {
  return (a / gcd(a, b)) * b;  
}

int main() {

  int n1, n2;
  
  printf("Enter two positive integers: ");
  scanf("%d%d", &n1, &n2);

  printf("LCM of %d and %d is %d", n1, n2, lcm(n1, n2));

  return 0;
}