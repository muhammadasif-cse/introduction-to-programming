#include <stdio.h>
#include <stdlib.h>

int main()
{
    //* single input/output character
    char n;
    scanf("%c", &n);
    printf("%c\n", n);

    //* word input/output
    char w[10];
    scanf("%s", &w);
    printf("%s\n", w);

    //* multiple word input/output 
    //! Reads up to 99 characters or until a newline is encountered
    char m[100];
    fgets(m, 100, stdin);
    printf("%s", m);

    return 0;
}