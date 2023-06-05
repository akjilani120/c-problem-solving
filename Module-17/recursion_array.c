#include <stdio.h>
#include <string.h>
void fun(int ar[], int n, int i)
{
    if (i == n)
        return;
    printf("%d \n", ar[i]);
    fun(ar, n, i + 1);
}
int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    fun(ar, 5, 0);
    return 0;
};