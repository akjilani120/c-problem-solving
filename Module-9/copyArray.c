#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int bn;
    scanf("%d", &bn);
    int b[bn];
    for (int i = 0; i < bn; i++)
    {
        scanf("%d", &b[i]);
    }
    int ans[n + bn];
    for (int i = 0; i < n; i++)
    {
        ans[i] = a[i];
    }
    int i = n;
    for (int j = 0; j < bn; j++)
    {
        ans[i] = b[j];
        i++;
    }
    for (int i = 0; i < n + bn; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
};