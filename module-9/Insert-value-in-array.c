#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N];


    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    N += 1;
    int idx, V;
    scanf("%d %d", &idx, &V);

    for (int i = N; idx - 1 < i; i--)
    {
        arr[i] = arr[i - 1];
        if (idx == i)
        {
            arr[i] = V;
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}
