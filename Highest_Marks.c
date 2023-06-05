#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int n;
    int max = INT_MIN;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int a = max - ar[i];
        printf("%d ", a);
    }

    return 0;
};