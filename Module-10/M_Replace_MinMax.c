#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {

        // printf("%d", ar[i]);
    }
    for (int j = 0; j < n; j++)
    {

        printf("%d", ar[j]);
    }
    // printf("%d\n", max);

    return 0;
};