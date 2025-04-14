/*
Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.
*/

#include <stdio.h>

int main()
{
    int N;
    int num;
    int max = 0;

    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &num);

        if (max < num)
        {
            max = num;
        }
    }
    printf("%d", max);
    return 0;
}
