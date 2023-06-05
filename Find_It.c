#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int findNumber = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int s;
    scanf("%d", &s);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == s)
        {
            findNumber++;
        }
    }
    printf("%d", findNumber);
    return 0;
};