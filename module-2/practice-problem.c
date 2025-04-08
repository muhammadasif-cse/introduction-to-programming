/*
 * Take a number from user and check if its a even number or odd number.
 * Take a number from user and check if its a positive or negative number.
 * Explain if else ladder.
*/

#include <stdio.h>

int main()
{
    // check even or odd number
    int number;
    printf("Enter a number:");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("The number is zero");
        return 0;
    }
    if (number > 0)
    {
        printf("The number is positive \n");
    }
    else
    {
        printf("The number is negative \n");
    }
    if (number % 2 == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}
