#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int primarySum = 0;
    int secondarySum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {

                primarySum = primarySum + ar[i][j];
            }
            if (i + j == n - 1)
            {
                secondarySum = secondarySum + ar[i][j];
            }
        }
    }
    int mainValue = primarySum - secondarySum;
    printf("%d", abs(mainValue));
    return 0;
};