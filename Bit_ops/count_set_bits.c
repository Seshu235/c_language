
#include <stdio.h>

int count_set_bits(int num)
{
    int count = 0;
    while (num > 0) {
        count += (num & 1);
        num >>= 1;
    }

    return count;
}

int main(int argc, char const *argv[])
{
    int value;

    printf("Enter a value to count set bits in it\n");
    scanf("%d", &value);

    printf("Number of set bits present in %d is %d\n", value, count_set_bits(value));

    return 0;
}
