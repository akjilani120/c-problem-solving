#include <stdint.h>
int main()
{
    int N;
    scanf("%d", &N);
    int i;
    for (i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        else if (N <= 1)
        {
            printf("-1\n");
        }
    };
    return 0;
};