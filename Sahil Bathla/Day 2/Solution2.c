// WAP to check whether a given number is a palindrome number or not.
#include <stdio.h>

int main()
{
    int num, r, sum = 0, temp; // temp-> Temporary variable
    // Accepting the input from the user
    printf("Enter the number:");
    scanf("%d", &num);
    temp = num; // assigning the value of num to temp

    // palindrome number is the number that remains the same when its digits are reversed
    for(int i=num; i>0; )
    {
        r = i % 10;
        sum = (sum* 10) + r;
        i = i / 10;
    }
    num = temp;
    if (num == sum)
    {
        printf("%d is a palindrome number", num);
    }
    else
    {
        printf("%d is not a palindrome number", num);
    }
    return 0;
}
