#include <stdio.h>
#include <string.h>

int main()
{
    char input[16];

    puts("Enter a string");
    fgets(input, 16, stdin);

    int length = strlen(input);

    if (input[length - 1] == '\n') {
        input[length - 1] = '\0';
        length = length - 1;
    }

    for (size_t i = 0; i <= length; i++)
    {
        if (input[i] == '\n')
            printf("input[%ld] = \\n\n", i);
        else if (input[i] == '\0')
            printf("input[%ld] = \\0\n", i);
        else
            printf("input[%ld] = %c\n", i, input[i]);
    }

    printf("String: %s\n", input);
}