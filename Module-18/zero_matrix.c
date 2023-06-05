#include <stdio.h>
#include <string.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int ar[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int zero = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ar[i][j] == 0)
            {
                zero++;
            }
        }
    }

    int total = row * col;
    if (zero == total)
    {
        printf("Zero Matrix");
    }
    else
    {
        printf("not Zero Matrix");
    }

    return 0;
};