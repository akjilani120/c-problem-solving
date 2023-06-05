#include <stdio.h>
#include <string.h>
void fun(int i)
{
    if (i == 0)
    {
        return;
    }

    printf("I love Recursion\n");
    fun(--i);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
};