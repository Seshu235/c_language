#include <stdio.h>
#include <string.h>

// Matrix to store state
int F[2][2] = {{1,1},{1,0}};

void multiply(int A[2][2], int B[2][2]) {
    int mul[2][2];
    for(int i=0; i<2; i++) {
      for (int j=0; j<2; j++) {
        mul[i][j]=0;
        for (int k=0; k<2; k++) {
          mul[i][j] += A[i][k]*B[k][j];
        }
      }
    }
    memcpy(A, mul, sizeof(mul));
}

int fib(int n) {
    if (n==0) 
      return 0;
  
    int M[2][2] = {{1,1},{1,0}};
    
    int res[2][2] = {{1,0},{0,1}}; 
      
    while (n) {
        if (n & 1) 
            multiply(res, M);
      
        multiply(M, M);
          
        n >>= 1;  
    }
      
    return res[0][0];
}

int main() {
  int n = 6;
  printf("Fibonacci number at position %d is %d \n", n, fib(n));  
  return 0;
}