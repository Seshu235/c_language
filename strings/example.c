#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char string[20];
    printf("Enter a string\n");
    scanf("%[^,]", string);

    printf("String: %s\n", string);
    printf("Size: %lu\n", sizeof(string));
    printf("Length: %lu\n", strlen(string));
}