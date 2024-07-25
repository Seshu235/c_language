/***********************************************************************************
 * @file    : exaple2.c
 * @author  : seshu sai babu.p
 * @brief   : contains functionality of my application
***********************************************************************************/

/**********************************************************************************/
#include <stdio.h>
/**********************************************************************************/

/**********************************************************************************/
struct member1 {
    char c;
    int i;
};

struct member2 {
    char c;
    int i;
}var2;
/**********************************************************************************/

int main()
{
    struct member1 var1;

    printf("Value of Var1.c: %d\tValue of Var1.i: %d\n", var1.c, var1.i);
    printf("Value of Var2.c: %d\t Value of Var2.i: %d\n", var2.c, var2.i);

    var1.c = 'A';
    var1.i = 25;
    var2.c = 'C';
    var2.i = 40;

    printf("Value of Var1.c: %d\tValue of Var1.i: %d\n", var1.c, var1.i);
    printf("Value of Var2.c: %d\t Value of Var2.i: %d\n", var2.c, var2.i);

    return 0;

}