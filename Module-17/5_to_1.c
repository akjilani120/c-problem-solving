#include <stdio.h>
#include <string.h>
void fun(int x)
{
    if (x == 0)
        return;

    printf("%d \n", x);
    fun(x - 1);
}
int main()
{
    fun(5);
    return 0;
};