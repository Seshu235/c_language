
#include <stdio.h>

int main(void)
{
    int a = 25;
    int b = 05;
    int c = 10;
    int d = 07;

    printf("a %% b = %i\n", a % b);
    printf("a %% c = %i\n", a % c);
    printf("a %% c = %i\n", a % d);
    printf("a / d * d + a %% d = %i\n", a / d * d + a % d);

    return 0;
}