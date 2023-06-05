#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d ", &n);
    char a[n];
    int sum = 0;
    int len = strlen(a);
    printf("%d", len);
    if (strlen(a) == 1)
    {
        scanf("%s", a);
        for (int i = 0; i < strlen(a); i++)
        {
            int v = a[i] - '0';
            sum = sum + v;
        }
        printf("%d", sum);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%s", a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            int v = a[i] - '0';
            sum = sum + v;
        }
        printf("%d", sum);
    }

    return 0;
};