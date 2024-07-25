#include <stdio.h>

void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main(int argc, char const *argv[])
{
    int a;
    int b;

    printf("Enter \'a\' and \'b\' values\n");
    scanf("%d%d", &a, &b);

    printf("a=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("a=%d b=%d\n", a, b);
    printf("%%%d\n", 7);

    return 0;
}
