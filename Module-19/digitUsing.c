#include <stdio.h>
#include <string.h>
void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    int x = n % 10;
    fun(n / 10);
    printf("%d ", x);
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int p;
        scanf("%d", &p);

        fun(p);
        printf("\n");
    }

    return 0;
};