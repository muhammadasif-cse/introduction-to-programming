#include <stdio.h>

void noParameterNoReturn()
{
    int n;
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        printf("This is odd number");
    }
    else
    {
        printf("This is even number");
    }
}

void parameterButNoReturn(int num)
{
    if (num % 2 != 0)
    {
        printf("This is odd number");
    }
    else
    {
        printf("This is even number");
    }
}
int noParameterButReturn()
{
    int n;
    scanf("%d", &n);
    if (n % 2 != 0)
        return 10;
    else
        return 100;

    return 0;
}

int parameterAndReturn(int num)
{
    if (num % 2 != 0)
        return 1;
    else
        return 0;

    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    // noParameterNoReturn();
    // parameterButNoReturn(n);
    // int isEven = noParameterButReturn();
    // printf("%d", isEven);
    int isEven = parameterAndReturn(n);
    if (isEven)

    {
        printf("This is odd number");
    }
    else
    {
        printf("This is even number");
    }

    return 0;
}