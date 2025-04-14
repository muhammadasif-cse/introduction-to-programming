/*
Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C (-10^5 <=A, B, C <= 10^5)

Output
Print the minimum number followed by a single space then print the maximum number.
*/

#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    // get minimum number
    if (A <= B && A <= C) printf("%d ", A);
    else if (B <= A && B <= C) printf("%d ", B);
    else if (C <= A && C <= B) printf("%d ", C);
    // get maximum number
    if (A >= B && A >= C) printf("%d", A);
    else if (B >= A && B >= C) printf("%d", B);
    else if (C >= A && C >= B) printf("%d", C);

    return 0;
}
