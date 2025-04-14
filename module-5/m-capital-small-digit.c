/*

Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.
Note:
Digits in ASCII '0' = 48,'1' = 49
Capital letters in ASCII 'A' = 65, 'B' = 66
Small letters in ASCII 'a' = 97,'b' = 98

Input
Only one line containing a character X which will be a capital or small letter or digit.

Output
Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.
 */
#include <stdio.h>

int main()
{
    char X;
    scanf("%c", &X);

    if (X >= 48 && X <= 57)
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if (X >= 65 && X <= 90)
        {
            printf("IS ALPHA");
        }else if (X >= 97 && X <= 122)
        {
            printf("IS SMALL");
        }
    }


    return 0;
}
