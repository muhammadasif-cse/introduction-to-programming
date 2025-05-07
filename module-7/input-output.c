#include <stdio.h>

int main()
{
    //* input how many array nums
    int n;
    scanf("%d", &n);

    //* input all num
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //* output all nums
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}