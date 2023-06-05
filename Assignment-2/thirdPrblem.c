#include <stdint.h>
int main()
{
    int n;
    int sumEven = 0;
    int sumOdd = 0;
    scanf("%d", &n);
    int i;

    for (i = 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);

        if (a % 2 == 0)
        {
            sumEven = sumEven + a;
        }
        else
        {
            sumOdd = sumOdd + a;
        }
    }
    printf("%d %d ", sumEven, sumOdd);
    return 0;
};