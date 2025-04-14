/*
Given a number N. Print the digits of that number from right to left separated by space.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109)

Output
For each test case print a single line contains the digits of the number separated by space.
*/

#include <stdio.h>

int main()
{
    int N;
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        do
        {
            printf("%d ", N % 10);
            N /= 10; // N = N / 10;
        }
        while (N != 0);
        printf("\n");
    }

    return 0;
}
