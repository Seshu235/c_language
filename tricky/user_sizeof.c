
#include<stdio.h>

#define size_of(x) ((char *)(&x+1)-(char *)&x)

int main()
{
	double x;
	printf("%ld", size_of(x));
}
