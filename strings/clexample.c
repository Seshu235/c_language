#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <errno.h>

int main() {
    uintmax_t a;
    char *endptr;
    //const char *str = "0xFFFFFFFFFFFFFFFF";
    const char *str = "0x1234";
    uintmax_t result;
    errno = 0;

    result = strtoumax(str, &endptr, 16);

    if (endptr == str) {
        printf("No valid conversion could be performed.\n");
    } else if (errno == ERANGE && result == UINTMAX_MAX) {
        printf("Value out of range: 0x%"PRIxMAX"\n", result);
    } else if (errno == ERANGE && result == 0) {
        printf("Value underflow occurred.\n");
    } else {
        printf("Converted value: 0x%"PRIxMAX"\n", result);
    }

    return 0;
}