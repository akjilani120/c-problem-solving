#include <stdio.h>
#include <string.h>
int main()
{
    int n;

    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] > ar[j])
            {
                int stor = ar[i];
                ar[i] = ar[j];
                ar[j] = stor;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (n % 2 != 0)
        {
            if (i == (n / 2))
            {
                printf("%d ", ar[i]);
            }
        }
        else
        {
            if (i == (n / 2) || i == ((n / 2) - 1))
            {

                printf("%d ", ar[i]);
            }
        }
    }

    return 0;
};