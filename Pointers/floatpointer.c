
#include <stdio.h>
union f_binary {
    float f;
    unsigned char buffer[4];
};

int main(void)
{
    union f_binary ptr;
    ptr.f = 1.1;

    printf("%#X %#X %#X %#X\n", ptr.buffer[0], ptr.buffer[1], ptr.buffer[2], ptr.buffer[3]);
}