#include <stdio.h>
#include <stdbool.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    if (row != col)
    {
        printf("This is not secondary diagonal matrix");
        return 0;
    }

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    bool is_diagonal_matrix = true;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j != row - 1)
            {
                if (arr[i][j] != 0)
                {
                    is_diagonal_matrix = false;
                }
            }
        }
    }

    if (is_diagonal_matrix)
    {
        printf("This is secondary diagonal matrix");
    }
    else
    {
        printf("This is not secondary diagonal matrix");
    }

    return 0;
}