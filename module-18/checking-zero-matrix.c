#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int is_zero_matrix = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] != 0)
            {
                is_zero_matrix = 0;
            }
        }
    }

    if (is_zero_matrix)
    {
        printf("This is zero matrix");
    }
    else
    {
        printf("This is not zero matrix");
    }

    return 0;
}