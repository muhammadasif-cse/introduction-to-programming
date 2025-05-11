//* 1st option
// #include <stdio.h>

// int recursion_reverse(int n, int count)
// {
//     if (0 == count)
//     {
//         return 0;
//     }

//     printf("%d\n", count);
//     recursion_reverse(n, count - 1);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     recursion_reverse(n, n);

//     return 0;
// }

//* 2nd option
#include <stdio.h>

int recursion_reverse(int n, int count)
{
    if (n + 1 == count)
    {
        return 0;
    }

    recursion_reverse(n, count + 1);
    printf("%d\n", count);
}

int main()
{
    int n;
    scanf("%d", &n);

    recursion_reverse(n, 1);

    return 0;
}