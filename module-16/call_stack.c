#include <stdio.h>

int chilo()
{
    printf("Chilo\n");
}

int nilo()
{
    printf("Nilo\n");
    chilo();
}
int mello()
{
    printf("Mello\n");
    nilo();
}
int gello()
{
    printf("Gello\n");
    mello();
}

int hello()
{
    printf("Hello\n");
    gello();
}

int main()
{
    printf("Hi\n");
    hello();
    return 0;
}