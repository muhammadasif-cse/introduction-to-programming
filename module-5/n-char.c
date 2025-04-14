#include <stdio.h>

int main()
{
    char X;
    scanf("%c", &X);
    if (X >= 'A' && X <= 'Z')
    {
        printf("%c\n", X + 32);
    }
    else if (X >= 'a' && X <= 'z')
    {
        printf("%c\n", X - 32);
    }
    return 0;
}