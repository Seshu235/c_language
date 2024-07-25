#include <stdio.h>
#include <stdlib.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void printError(const char *message) {
    fprintf(stderr, ANSI_COLOR_RED "%s" ANSI_COLOR_RESET "\n", message);
    exit(1); // Exit with a non-zero status to indicate an error
}

int main() {
    FILE *file = fopen("nonexistent.txt", "r");
    if (file == NULL) {
        printError("Error: Failed to open file.");
    }

    // Rest of the code...

    return 0;
}