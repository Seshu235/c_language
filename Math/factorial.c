#include <stdio.h>

int factorial(int n) {
  int result = 1;
  
  for(int i=2; i<=n; i++) {
    result *= i; 
  }
  
  return result; 
}

int main() {
  int num;
  
  printf("Enter a positive integer: ");
  scanf("%d", &num);

  printf("Factorial of %d is %d", num, factorial(num));  

  return 0;
}