#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    fgets(a, 10, stdin);
    a[6] = "\0";
    printf("%s", a);
    return 0;
};