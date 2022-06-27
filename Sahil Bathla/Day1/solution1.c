// WAP to check whether a number is prime or not using while loop
#include <stdio.h>

int main()
{
    int i = 2, num, prime = 1;

    // Accepting the input from the user
    printf("Enter the number:");
    scanf("%d", &num);

    // prime number is the number which is divisible by 1 and only itself
    while (i < num)
    {
        if (num % i == 0)
        {
            prime = 0; 
            break;
        }
        i++;
    }
    if (prime == 0 && num != 2)
    { // when num=2 then it will be a prime number
        printf("%d is not a prime number", num);
    }
    else
    {
        printf("%d is a  prime number", num);
    }
    return 0;
}
