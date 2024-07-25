#include <stdio.h>
#include <math.h>

int palindrome(int num)
{
    int temp;
    int rem;
    int result = 0;

    temp = num;
    while (temp > 0)
    {
        rem = temp%10;
        result = result * 10 + rem;
        temp /= 10;
    }
    
    return (num == result);
}

// Optimized code
int isPalindrome(int num)
{
    int digits = (int) log10(num);

    for (size_t i = 0; i <= digits/2; i++)
    {
        /* code */
        int front = (num / (int) pow(10, digits-i)) % 10;
        int back = (num/ (int) pow(10, i)) % 10;

        if (front != back)
            return 0;
    }
    
    return 1;
}

int main(int argc, char const *argv[])
{
    int value;
    
    printf("Enter a value to check it is palindrome or not\n");
    scanf("%d", &value);

    if (isPalindrome(value)) {
        printf("%d is a palindrome\n", value);
    } else {
        printf("%d is not a palindrome\n", value);
    }
    
    return 0;
}
