#include <stdio.h>
#include <string.h>
void fun(int x)
{
    if (x == 6)

        return;
    printf("%d", x);
    fun(x + 1);
}
int main()
{
    fun(1);
    return 0;
};