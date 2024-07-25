// c program to illustrate pragma start and pragma exit
#include <stdio.h>

void __attribute__((constructor)) func1();
void __attribute__((destructor)) func2();


void func1() {  printf("Inside func1 function\n");}

void func2() {  printf("Inside func2 function\n");}

int main()
{
    printf("Inside main function\n");
    return 0;
}



