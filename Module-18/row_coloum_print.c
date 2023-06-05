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
    // to fixed row
    // int e = 0;
    // for (int i = 0; i < col; i++)
    // {
    //     printf("%d ", ar[e][i]);
    // }
    // to fixed coloum
    for (int i = 0; i < row; i++)
    {
        printf("%d ", ar[i][1]);
    }

    return;
};