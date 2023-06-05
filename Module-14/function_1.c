#include <stdio.h>
#include <string.h>
int sum(int a, int b);
int main()
{
    sum(10, 50);
    sum(100, 550);

    return 0;
};
int sum(int a, int b)
{
    int sum = a + b;
    printf("%d \n", sum);
};