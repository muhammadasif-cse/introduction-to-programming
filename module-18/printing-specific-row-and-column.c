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

    int specific_row;
    scanf("%d", &specific_row);

    for (int i = 0; i < col; i++)
    {
        printf("%d ", arr[specific_row][i]);
    }
    printf("\n");

    int specific_col;
    scanf("%d", &specific_col);

    for (int i = 0; i < row; i++)
    {
        printf("%d ", arr[i][specific_col]);
    }

    return 0;
}