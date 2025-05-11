#include <stdio.h>

//* print array
void print_array(int n, int arr[], int i)
{
    if (i == n)
    {
        return 0;
    }

    printf("%d ", arr[i]);
    print_array(n, arr, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    print_array(n, arr, 0);

    return 0;
}