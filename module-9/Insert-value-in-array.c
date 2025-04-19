#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N + 1];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int idx, v;
    scanf("%d %d", &idx, &v);

    for (int j = N; j > idx; j--)
    {
        arr[j] = arr[j - 1];
    }
    for (int k = 0; k < N + 1; k++)
    {
        if (k == idx)
        {
            arr[k] = v;
        }
        printf("%d ", arr[k]);
    }

    return 0;
}
