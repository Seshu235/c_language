#include <stdio.h>

int power_of_two(int num)
{
    return (num && !(num & (num-1)));
}

int main(int argc, char const *argv[])
{
    int x;

    printf("Enter \'a\' value to check power of 2 or not\n");
    scanf("%d", &x);

    if (power_of_two(x)) {
        printf("%d is a power of 2\n", x);
    } else {
        printf("%d is not a power of 2\n", x);
    }

    return 0;
}
