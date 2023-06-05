#include <stdio.h>
#include <string.h>
void fun(int i)
{
    if (i == 1)
    {
        printf("%d", i);
        return;
    }
    else
    {
        printf("%d ", i);
    }

    fun(i - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
};