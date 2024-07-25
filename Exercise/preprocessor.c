/********
 * @file    : preprocessor.c
 * @author  : seshu sai babu.p
 * @brief   : contains fucntionality of my application
**************/

/*****************/
#include <stdio.h>
/********************/

/******************/

/*********************/

int main()
{
    #ifdef PI
    printf("PI is defined\n");
    #elif defined(SQUARE)
    printf("SQUARE is defined\n");
    #else
        #error "Neither PI nor SQUARE is defined"
    #endif
}
