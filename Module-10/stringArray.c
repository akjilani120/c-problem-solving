#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", arr[i]);
    }

    return 0;
};