#include <stdio.h>
#include <string.h>
int count_before_zero(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            if (arr[i] == 0)
            {
                break;
            }
            count++;
        }
    }

    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int fun = count_before_zero(ar, n);
    printf("%d", fun);
    return 0;
};