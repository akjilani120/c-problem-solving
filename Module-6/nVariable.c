#include <stdint.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &i);
        // printf("%d", i);
        if (i % 2 == 0)
        {
            int t = i + i;
            printf("%d\n Even", t);
        }
        else
        {
            printf("%d\n odd", i);
        }
    }

    return 0;
};