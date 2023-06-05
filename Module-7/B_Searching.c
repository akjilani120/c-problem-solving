#include <stdint.h>
int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int mach = -1;
    int x;
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            mach = i;
            break;
        }
    }
    printf("%d\n", mach);
    return 0;
};