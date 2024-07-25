#include <stdio.h>

long series_sum(int num)
{
    long result = (long)num * (num + 1)/2;

    return result;
}

int main(int argc, char const *argv[])
{
    int val = 0;
    long result = 0;

    printf("Enter a value\r\n");
    scanf("%d", &val);

    printf("sum of series of %d is %ld\r\n", val, series_sum(val));

    return 0;
}