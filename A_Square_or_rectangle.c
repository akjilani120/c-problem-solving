#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int square = 0;
    int rectangle = 0;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == b)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }

    return 0;
};