#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int v = strcmp(a, b);
    // if b is smail then output will 1 or more  then 1
    // if a and b is same to then output will 0
    // if a is smail then output will -1 or less then -1
    // printf("%d", v);
    if (v < 0)
    {
        printf("A is small");
    }
    else if (v > 0)
    {
        printf("B is small");
    }
    else
    {
        printf("A and B are same");
    }

    // =============It is description of lexicographical=======
    // int i = 0;
    // while (1)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("Same to\n");
    //         break;
    //     }
    //     else if (a[i] == '\0')
    //     {
    //         printf("A is small\n");
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("B is small\n");
    //         break;
    //     }
    //     if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    //     else if (a[i] < b[i])
    //     {
    //         printf("a is small\n");
    //         break;
    //     }
    //     else
    //     {
    //         printf("b is small\n");
    //         break;
    //     }
    // }

    return 0;
};