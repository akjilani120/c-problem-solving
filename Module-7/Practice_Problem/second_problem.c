#include <stdint.h>
int main()
{
    int n, mach, s;

    scanf("%d", &n);
    scanf("%d", &s);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == s)
        {
            mach = i;
        }
        else
        {
            mach = -1;
        }
    }
    printf("%d", mach);
    return 0;
};