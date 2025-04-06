#include <stdbool.h>
#include <stdio.h>

int main()
{
    printf("Hello, World!");
    // if you want to print 2 different lines, you can use \n
    printf("Hello, World!\nWelcome to C programming!\n");
    // if you want to print a tab, you can use \t
    printf("Hello, World!\t Welcome to C programming!\n");


    // data type
    // HSC Result Console

    // * Total number of subjects
    int const totalPassMark = 198;
    int const totalNumber = 450; // 6 subject

    char const grade = 'A'; // char is used to store a single character

    float const result = 4.50f; // float is used to store decimal number

    bool isPass;
    isPass = totalPassMark < totalNumber;
    // printing all the variables for show result on console

    printf("Total Number: %d\nGrade: %c\nResult: %f\n", totalNumber, grade, result);
    if (isPass)
    {
        printf("Your grade is pass... %d\n", isPass);
    }
    else
    {
        printf("Your grade is failed... %d\n", isPass);
    }
    return 0; // if you return 0, it means the program executed successfully. But doesn't mandatory.
};
