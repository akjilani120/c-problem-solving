#include <stdint.h>
#include <limits.h>
int main()
{
    int n;
    int a, max = INT_MIN, min = INT_MAX;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
        }
        if (min > a)
        {
            min = a;
        }
    }
    printf("%d %d", max, min);
    return 0;
};