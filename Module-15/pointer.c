#include <stdio.h>
#include <string.h>
int main()
{
    int x = 10;
    int *prt = &x;
    printf("%p\n", &x);
    printf("%p\n", &prt);
    return 0;
};