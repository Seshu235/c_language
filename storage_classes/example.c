#include <stdio.h>

void function1(void) 
{
    int x= 5;
    printf("X value is : %d\n", x);
}
extern int x;

void function2(void)
{
    x++;

    printf("X value is: %d\n", x);

}

int main()
{
    function1();
    function2();
}