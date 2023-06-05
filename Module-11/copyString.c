#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    // ======This is sortcut of copy string=====
    strcpy(a, b);
    // ======This is description of copy string=====
    // for (int i = 0; i <= strlen(b); i++)
    // {
    //     a[i] = b[i];
    // }
    printf("%s %s", a, b);
    return 0;
};