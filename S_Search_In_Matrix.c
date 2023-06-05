#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ar[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    int checkValue;
    scanf("%d", &checkValue);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ar[i][j] == checkValue)
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        printf("will not take number \n");
    }
    else
    {
        printf("will take number \n");
    }

    return 0;
};