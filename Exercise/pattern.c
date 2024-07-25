#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, loop;
    printf("Enter a number\n");
    scanf("%d", &num);

    loop = (num * 2) - 1;
    for (int i = 0; i < num - 1; i++, printf("\n"))
    {
        for (int k = 0; k < num; k++)
        {
            printf("%d ", num - i);
        }
        
        for (int j = 0; j < num - 1; j++)
        {
            printf("%d ", num - i);
        }   
    }
    for (int i = 0; i < num; i++, printf("\n"))
    {
        for (int k = 0; k < num; k++)
        {
            printf("%d ", i + 1);
        }
        
        for (int j = 0; j < num - 1; j++)
        {
            printf("%d ", i + 1);
        }   
    }
    
    return 0;
}
