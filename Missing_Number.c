#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int value = a - (b + c + d);
        printf("%d\n", value);
    }

    return 0;
};