
#include <stdio.h>
#include <stddef.h>
#include <uchar.h>

int main()
{
    int array[64] = {};
    wchar_t ch;
    char16_t n;
    char32_t b;


    for (size_t i = 0; i < 64; i++)
    {
        /* code */
        printf("array[%lu] : %d\n", i, array[i]);
    }
    
}