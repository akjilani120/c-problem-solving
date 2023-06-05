#include <stdint.h>
int main()
{
    int x;
    scanf("%d", &x);
    int firstDigit = x / 1000;
    if (firstDigit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("EVEN");
    }
    printf("%d", firstDigit);
    return 0;
};