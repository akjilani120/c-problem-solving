#include <stdio.h>
int main()
{
    char ar[5];
    int size = sizeof(ar) / sizeof(int);
    printf("%d", sizeof(ar));
    return 0;
};