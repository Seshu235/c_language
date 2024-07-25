#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[ ]", str); // Reads a string including spaces
    printf("You entered: %s\n", str);
    return 0;
}