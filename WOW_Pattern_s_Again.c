#include <stdio.h>
#include <string.h>
int main()
{
    int n, k = 1, s;
    scanf("%d", &n);
    s = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        s--;
        for (int j = 1; j <= k; j++)
        {
            if (i % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf("^");
            }
        }
        k = k + 2;
        printf("\n");
    }

    return 0;
};