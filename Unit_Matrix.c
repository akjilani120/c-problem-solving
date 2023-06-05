#include <stdio.h>
#include <string.h>
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
    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (ar[i][j] != 1)
                {
                    flag = 0;
                }
                continue;
            }
            if (ar[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
};