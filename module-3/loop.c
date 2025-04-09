#include <stdio.h>

int main()
{
    /*
     ? For the following loop, how many times will “hi” be printed?
       for(int j=5;j<=10;j++)
       {
       printf("hi ");
       }
     */
    printf("Problem-1 solution \n");
    for (int j = 5; j <= 10; j++)
    {
        printf("Hi %d \n", j);
    }

    /*
     ? How many times “*” will be printed?
    for(int i=0;i<=5;i++)
    {
    for(int j=1;j<3;j++)
    {
    printf("*");
    }
     */
    printf("Problem-2 solution \n");
    int counter = 0;
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            counter++;
            printf("* %d \n", counter);
        }
    }

    /*
     ? What will be the output of the following code?
        int main()
        {
        int i=0,j=0;
        for(j=1;j<=5;j++)
        {
        i++;
        }
        printf("%d",j);
        }
     */
    printf("Problem-3 solution \n");
    int i = 0, j = 0;
    for (j = 1; j <= 5; j++)
    {
        i++;
    }
    printf("%d\n\n", j);

    printf("Problem-4 solution \n");
    int k = 1;
    do
    {
        printf("%d \n", k);
        k++;
    }
    while (k < 5);

    printf("Problem-5 solution \n");

    int l = -5;
    int numl = 1;
    while (l < 3)
    {
        printf("%d hello \n", numl++);
        l += 2;
    }

    int t = 5;
    while (t < 10)
    {
        printf("%d t", t);
        t++;
    }
    return 0;
}
