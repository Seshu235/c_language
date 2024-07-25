#include <stdio.h>
#include <stdlib.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void printError(const char *message) {
    fprintf(stderr, ANSI_COLOR_RED "%s" ANSI_COLOR_RESET "\n", message);
}

int main() {
    int x = 10, y = 0;

    if (y == 0) {
        printError("Error: Division by zero!");
    } else {
        int result = x / y;
        printf("Result: %d\n", result);
    }

    return 0;
}