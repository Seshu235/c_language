#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));
    
    // Generate a random number between 0 and RAND_MAX
    int random_number = rand();
    
    // Generate a random number between 0 and 99
    int random_0_to_99 = rand() % 100;
    
    printf("Random number: %d\n", random_number);
    printf("Random number (0-99): %d\n", random_0_to_99);
    
    return 0;
}