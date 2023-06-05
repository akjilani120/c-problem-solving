#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int cout[7] = {0};
    for (int i = 0; i < n; i++)
    {
        int value = a[i];
        cout[value]++;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d = %d\n", i, cout[i]);
    }

    return 0;
};