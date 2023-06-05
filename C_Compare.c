#include <stdio.h>
#include <string.h>
int main()
{
    char x[19], y[19];
    scanf("%s %s", x, y);
    int value = strcmp(x, y);
    if (value < 0)
    {
        printf("%s\n", x);
    }
    else if (value > 0)
    {
        printf("%s\n", y);
    }
    else
    {
        printf("%s\n", x);
    }

    return 0;
};