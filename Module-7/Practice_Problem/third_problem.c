
#include <stdio.h>
#include <limits.h>
int main()
{
    int n, min = INT_MAX;
    int index;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] == min)
        {
            index = i;
        }
    }
    printf("%d %d", min, index);

    return 0;
};