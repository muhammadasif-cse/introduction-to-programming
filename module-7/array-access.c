#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int access;
    scanf("%d", &access);

    for (int i = 0; i < n; i++)
    {
        if (access == i)
        {

            printf("%d", arr[i]);
        }
    }

    return 0;
}