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
    int x;
    int v;
    scanf("%d", &x);
    scanf("%d", &v);
    for (int i = n - 1; i >= 0; i--)
    {
        arr[x] = v;
        printf("%d", arr[i]);
    }

    return 0;
};