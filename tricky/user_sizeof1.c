#include <stdio.h>
#define SIZEOF(T) (((T*)0)+1)
int main()
{
	printf("%d\n", SIZEOF(int));
}
