#include <stdio.h>

int main()
{
    int a = 10;
    const int b = 20;
    int temp = 0;

    temp = a;
    a = b;


    printf("a = %d b = %d", a, temp);

    return 0;
}
