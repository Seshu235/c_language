#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 408;

    printf("%p\n", &x);
    printf("%d\n", *&x);

    return 0;
}
