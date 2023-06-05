#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    // =====This is sortcut of concatenation===
    strcat(a, b);
    // =====This is description of concatenation===
    // int i = 0;
    // int k = strlen(a);
    // int bl = strlen(b);
    // int ca = k + bl;
    // while (i <= ca)
    // {
    //     a[k] = b[i];
    //     k++;
    //     i++;
    // }
    printf("%s", a);
    return 0;
};