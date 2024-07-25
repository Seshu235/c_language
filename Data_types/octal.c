#include <stdio.h>

int main(void)
{
    int x;
    
    x = 83;
    printf("Decimal: %i\n", x);
    
    x = 0123;
    printf("Octal: %#o\n", x);

    x = 0x1234;
    printf("Hexa Decimal: %#x\n", x);

    x = 0xabcd;
    printf("Hexa Decimal: %#x\n", x);
    printf("Hexa Decimal: %#X\n", x);
}
