#include <stdio.h>
#include <string.h>

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
    getchar(); // to consume the newline character left in the buffer
    // or use a space in the format string of scanf to consume the newline character

    //* multiple word input/output
    //! Reads up to 99 characters or until a newline is encountered
    char m[100];
    fgets(m, 100, stdin);
    printf("%s\n", m);

    // char a[100];
    // gets(a);
    // printf("%s", a);

    //* string length
    // strlen() function returns the length of the string excluding the null character
    printf("%d\n", sizeof(m));
    printf("%d\n", strlen(w));
    return 0;
}
