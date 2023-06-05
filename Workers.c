#include <stdio.h>
#include <string.h>
int main()
{
    int m, m2, d;
    scanf("%d %d %d", &m, &m2, &d);
    int complete = (m * d) / m2;
    printf("%d", complete);
    return 0;
};