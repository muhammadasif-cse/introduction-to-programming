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

    int fast = 0;
    int last = N - 1;
    while (fast < last)
    {
        const int temp = arr[fast];
        arr[fast] = arr[last];
        arr[last] = temp;

        fast++;
        last--;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
