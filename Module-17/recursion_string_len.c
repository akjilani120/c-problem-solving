#include <stdio.h>
#include <string.h>
int fun(char a[], int i)
{
    if (a[i] == '\0')
        return 0;

    int len = fun(a, i + 1);
    return len + 1;
}
int main()
{
    char a[7] = "jilani";
    int len = fun(a, 0);
    printf("%d\n", len);
    return 0;
};