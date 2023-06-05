#include <stdio.h>
#include <string.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    long long int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int sum = 0;
    if (m == 1)
    {
        for (int i = m; i >= 1; i--)
        {
            sum = sum + ar[i];
        }
    }
    else
    {

        for (int i = m - 1; i >= 0; i--)
        {
            sum = sum + ar[i];
        }
    }

    printf("%d", sum);
    return 0;
};