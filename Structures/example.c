
#include <stdio.h>

#pragma pack(8)

struct abc {
    int a;
    int b;
    char c;
    short int f;
    char ch;
    char c8;
    char e;
}myStruct;

int main(int argc, char const *argv[])
{
    printf("size=%d\n", sizeof(myStruct));

    return 0;
}
