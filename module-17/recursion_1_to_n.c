#include <stdio.h>

int one_to_n(int n, int count)
{
    if (n + 1 == count)
    {
        return 0;
    }
    printf("%d\n", count++);
    one_to_n(n, count);
}

int main()
{
    int n;
    scanf("%d", &n);

    one_to_n(n, 1);
    return 0;
}