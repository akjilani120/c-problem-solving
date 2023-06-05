#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    int c = a + b;
    int d = a - b;
    int e = a * b;
    float f = a * 1.0 / b;

    printf("%d %d %d %f", c, d, e, f);
    return 0;
}