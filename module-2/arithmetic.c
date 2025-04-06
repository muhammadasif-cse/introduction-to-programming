#include <stdio.h>

int main()
{
    // get input data
    int const firstNum;
    int const secondNum;
    float const firstDivNum;
    float const secondDivNum;
    scanf("%d %f", &firstNum, &firstDivNum);
    scanf("%d %f", &secondNum, &secondDivNum);

    // (+) summation
    int const sum = firstNum + secondNum;
    printf("Summation: %d\n", sum);

    // (-) subtraction
    if (firstNum > secondNum)
    {
        int const sub = firstNum - secondNum;
        printf("Subtraction: %d\n", sub);
    }
    else
    {
        printf("Subtraction: Please provide the first number greater than the second number!\n");
    }

    // (*) multiplication
    int const mul = firstNum * secondNum;
    printf("Multiplication: %d\n", mul);

    // (/) division
    float const div = firstDivNum / secondDivNum;
    printf("Division: %f\n", div);

    // (%) remainder
    int const rem = firstNum % secondNum;
    printf("Remainder: %d\n", rem);
    return 0;
};
