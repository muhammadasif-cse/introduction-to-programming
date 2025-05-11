#include <stdio.h>

int one_to_five(int n)
{
    if (n == 6)
    {
        return 0;
    }

    printf("%d", n);
    one_to_five(n + 1);
}

int main()
{
    int n = 1;
    one_to_five(n);

    return 0;
}