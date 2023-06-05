#include <stdio.h>
#include <string.h>
int main()
{
    char arr[1000];
    char arr2[1000];
    scanf("%s", arr);
    scanf("%s", arr2);

    int a = strlen(arr);
    int b = strlen(arr2);
    printf("%d %d\n", a, b);
    printf("%s %s", arr, arr2);
    return 0;
};